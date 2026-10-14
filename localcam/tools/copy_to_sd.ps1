# Copies a folder onto a volume that has no drive letter (\\?\Volume{...}\),
# using .NET calls because Copy-Item cannot create folders on such paths.
param([string]$Source, [string]$Label = 'test', [string]$Name = 'debug')
$v = (Get-Volume | Where-Object { $_.DriveType -eq 'Removable' -and $_.FileSystemLabel -eq $Label }).Path
if (-not $v) { throw "removable volume '$Label' not found" }
$dest = $v + $Name
$src = (Resolve-Path -LiteralPath $Source).Path
[System.IO.Directory]::CreateDirectory($dest) | Out-Null
Get-ChildItem -LiteralPath $src -Recurse | ForEach-Object {
  $rel = $_.FullName.Substring($src.Length).TrimStart('\')
  $target = [System.IO.Path]::Combine($dest, $rel)
  if ($_.PSIsContainer) {
    [System.IO.Directory]::CreateDirectory($target) | Out-Null
  } else {
    [System.IO.File]::Copy($_.FullName, $target, $true)
  }
}
# Verify: compare SHA-256 of every file.
$sha = [System.Security.Cryptography.SHA256]::Create()
function Hash([string]$p) {
  $s = [System.IO.File]::OpenRead($p)
  try { ([System.BitConverter]::ToString($sha.ComputeHash($s))).Replace('-', '') } finally { $s.Close() }
}
$bad = 0
Get-ChildItem -LiteralPath $src -Recurse -File | ForEach-Object {
  $rel = $_.FullName.Substring($src.Length).TrimStart('\')
  $target = [System.IO.Path]::Combine($dest, $rel)
  $ok = [System.IO.File]::Exists($target) -and ((Hash $_.FullName) -eq (Hash $target))
  if (-not $ok) { $bad++ }
  '{0}  {1,7}  {2}' -f ($(if ($ok) { 'ok  ' } else { 'BAD ' }), $_.Length, "$Name\$rel")
}
if ($bad) { "MISMATCH: $bad file(s)" } else { 'all files verified' }
