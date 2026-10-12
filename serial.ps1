# Serijska konzola za kameru s filtriranjem log spama.
# Pokretanje iz WSL-a:
#   powershell.exe -NoProfile -ExecutionPolicy Bypass -File "$(wslpath -w ~/reverse_engineer_camera/serial.ps1)"
param(
  [string]$Port = 'COM4',
  [int]$Baud = 115200,
  # linije koje odgovaraju nekom od ovih regexa se ne ispisuju
  [string[]]$Spam = @(
    # log od anyka_ipc (vremenska oznaka ostane čitljiva i kad šum pokvari ostatak linije)
    '\d\d-\d\d \d\d:\d\d:\d\d\.\d', 'yi_cloud_init', 'ip:,mac:', 'ak_net_get_mac', 'net_get:',
    'ak_yi_qrcode', 'mt_ctrl_thread', 'P_WPA_SPC', 'connectting', 'wpa_state=', 'encode frame',
    # periodično ponovno pokretanje wifija (wifi_manage.sh stop/start)
    'wifi_manage\.sh', 'wifi station', 'killall: udhcpc', 'wpa_ctrl_open', 'rmmod', 'rtl8188',
    'wifi driver', 'SIOCSIWAP', 'wifi connecting tone', 'wifi config', 'check security',
    'security=', 'station_connect', 'Selected interface', '^OK$'
  ),
  # za testiranje: umjesto porta propusti kroz filter snimljeni izlaz iz datoteke
  [string]$Replay
)

$script:buf = ''
$script:open = $false   # na ekranu je nedovršena linija (prompt, eho tipki)
$SpamRe = $Spam -join '|'

# tekst bez ANSI escape sekvenci (boje, pomicanje kursora)
function Strip([string]$s) { $s -replace '\x1b\[[0-9;?]*[A-Za-z]', '' }

function Test-Spam([string]$s) { (Strip $s) -match $SpamRe }

# šum na liniji: kontrolni znakovi (osim \a \b \t) i bajtovi iznad ASCII-ja
function Test-Noise([string]$s) {
  $t = Strip $s
  if ($t.Length -eq 0) { return $false }
  $bad = 0
  foreach ($c in $t.ToCharArray()) {
    if (($c -lt ' ' -and "`a`b`t".IndexOf($c) -lt 0) -or $c -gt '~') { $bad++ }
  }
  return $bad -ge 3 -or $bad * 8 -gt $t.Length
}

# cijele linije: preskoči spam, šum i prazne linije (osim Entera na otvorenoj liniji)
function Write-Lines([string]$text) {
  foreach ($l in $text.Split("`n")) {
    $l = $l.TrimEnd("`r")
    if ((Test-Spam $l) -or (Test-Noise $l)) { continue }
    if ((Strip $l).Trim() -eq '' -and -not ($script:open -and $l -eq '')) { continue }
    [Console]::WriteLine($l)
    $script:open = $false
  }
}

# nedovršena linija: ispiši ako nije spam, šum ili samo ANSI kod
function Write-Partial([string]$text) {
  if ((Test-Spam $text) -or (Test-Noise $text) -or (Strip $text) -eq '') { return }
  [Console]::Write($text)
  $script:open = $true
}

function Feed([string]$d) {
  $script:buf += $d
  $i = $script:buf.LastIndexOf("`n")
  if ($i -ge 0) {
    Write-Lines $script:buf.Substring(0, $i)
    $script:buf = $script:buf.Substring($i + 1)
  }
}

$latin1 = [Text.Encoding]::GetEncoding(28591)   # šum ostaje prepoznatljiv umjesto '?'

if ($Replay) {
  Feed ([IO.File]::ReadAllText($Replay, $latin1))
  if ($script:buf) { Write-Partial $script:buf }
  return
}

$p = New-Object System.IO.Ports.SerialPort -ArgumentList $Port, $Baud, 'None', 8, 'One'
$p.Encoding = $latin1
$p.Open()
$last = [DateTime]::Now
try {
  while ($true) {
    $d = $p.ReadExisting()
    if ($d) { Feed $d; $last = [DateTime]::Now }

    # nedovršena linija: ispiši kad UART utihne
    if ($script:buf -and ([DateTime]::Now - $last).TotalMilliseconds -gt 60) {
      Write-Partial $script:buf
      $script:buf = ''
    }

    while ([Console]::KeyAvailable) {
      $k = [Console]::ReadKey($true)
      $p.Write([string]$k.KeyChar)
    }
    Start-Sleep -m 20
  }
} finally { $p.Close() }
