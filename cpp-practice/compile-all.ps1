param([string]$File = '')

$ErrorActionPreference = 'Stop'

$gpp = 'D:\mingw\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe'
$here = Split-Path -Parent $MyInvocation.MyCommand.Path

Write-Host '=== C++ Batch Compiler ==='
Write-Host ''

if ($File) {
    $files = Get-ChildItem -LiteralPath $here -File | Where-Object { $_.Name -eq $File -and $_.Extension -eq '.cpp' }
} else {
    $files = Get-ChildItem -LiteralPath $here -File | Where-Object { $_.Extension -eq '.cpp' -and -not $_.Name.StartsWith('_') }
}

if ($files.Count -eq 0) {
    Write-Host 'No .cpp files found'
    exit 1
}

$ok = 0
$fail = 0

foreach ($f in $files) {
    $idx = '{0:D4}' -f ($ok + $fail)
    $tempSrc = Join-Path $here ('_tmp_' + $idx + '.cpp')
    $tempExe = Join-Path $here ('_tmp_' + $idx + '.exe')
    $finalExe = Join-Path $here ($f.BaseName + '.exe')

    Write-Host "[$idx] $($f.Name)"

    try {
        [System.IO.File]::WriteAllBytes($tempSrc, [System.IO.File]::ReadAllBytes($f.FullName))

        & $gpp -fdiagnostics-color=always -g $tempSrc -o $tempExe
        $exitCode = $LASTEXITCODE

        Remove-Item $tempSrc -Force -ErrorAction SilentlyContinue

        if ($exitCode -eq 0 -and (Test-Path -LiteralPath $tempExe)) {
            if (Test-Path -LiteralPath $finalExe) {
                Remove-Item -LiteralPath $finalExe -Force
            }
            [System.IO.File]::Move($tempExe, $finalExe)
            Write-Host '  OK'
            $ok++
        } else {
            Write-Host '  FAILED'
            $fail++
            Remove-Item $tempExe -Force -ErrorAction SilentlyContinue
        }
    }
    catch {
        Write-Host '  ERROR:' $_
        $fail++
        Remove-Item $tempSrc -Force -ErrorAction SilentlyContinue
        Remove-Item $tempExe -Force -ErrorAction SilentlyContinue
    }
}

Write-Host ''
Write-Host "=== Result: $ok OK / $fail FAILED ==="