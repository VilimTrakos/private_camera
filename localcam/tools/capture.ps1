# Read-only capture of the camera's serial console: writes everything received
# on the port to stdout for $Seconds, never sends anything.
param([string]$Port = 'COM4', [int]$Baud = 115200, [int]$Seconds = 300)
$p = New-Object System.IO.Ports.SerialPort $Port, $Baud, 'None', 8, 'One'
$p.Encoding = [System.Text.Encoding]::GetEncoding(28591)
$p.Open()
[Console]::Out.WriteLine("=== capture start $(Get-Date -Format o)")
$end = (Get-Date).AddSeconds($Seconds)
try {
  while ((Get-Date) -lt $end) {
    $d = $p.ReadExisting()
    if ($d) { [Console]::Out.Write($d); [Console]::Out.Flush() }
    Start-Sleep -Milliseconds 50
  }
} finally {
  $p.Close()
  [Console]::Out.WriteLine("`n=== capture end $(Get-Date -Format o)")
}
