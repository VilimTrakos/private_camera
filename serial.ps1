# Serijska konzola za kameru s filtriranjem log spama.
# Pokretanje iz WSL-a:
#   powershell.exe -NoProfile -ExecutionPolicy Bypass -File "$(wslpath -w ~/reverse_engineer_camera/serial.ps1)"
param(
  [string]$Port = 'COM4',
  [int]$Baud = 115200,
  # linije koje odgovaraju ovom regexu se ne ispisuju
  [string]$Spam = 'yi_cloud_init|ak_net_get_mac|net_get:|wpa_cli still|P_WPA_SPC|ak_yi_qrcode|mt_ctrl_thread'
)

$p = New-Object System.IO.Ports.SerialPort -ArgumentList $Port, $Baud, 'None', 8, 'One'
$p.Open()
$buf = ''
$last = [DateTime]::Now
$skip = $false   # zadnja linija je bila spam -> preskoči prazne linije iza nje
$open = $false   # na ekranu je nedovršena linija (prompt, eho tipki)
try {
  while ($true) {
    $d = $p.ReadExisting()
    if ($d) { $buf += $d; $last = [DateTime]::Now }

    # cijele linije: ispiši samo one koje nisu spam
    $i = $buf.LastIndexOf("`n")
    if ($i -ge 0) {
      foreach ($l in $buf.Substring(0, $i).Split("`n")) {
        $l = $l.TrimEnd("`r")
        if ($l -match $Spam) { $skip = $true; continue }
        if ($l.Trim() -eq '' -and $skip -and -not $open) { continue }
        [Console]::WriteLine($l)
        $skip = $false
        $open = $false
      }
      $buf = $buf.Substring($i + 1)
    }

    # nedovršena linija: ispiši kad UART utihne
    if ($buf -and ([DateTime]::Now - $last).TotalMilliseconds -gt 60) {
      if ($buf -notmatch $Spam) { [Console]::Write($buf); $open = $true }
      $buf = ''
    }

    while ([Console]::KeyAvailable) {
      $k = [Console]::ReadKey($true)
      $p.Write([string]$k.KeyChar)
    }
    Start-Sleep -m 20
  }
} finally { $p.Close() }
