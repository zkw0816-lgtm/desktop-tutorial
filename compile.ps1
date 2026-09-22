param($Source, $Output)
$ErrorActionPreference = 'Stop'
$tmpOut = (Join-Path (Split-Path $Output) '__compile_tmp__.exe')
$rspPath = (Join-Path (Split-Path $Output) '__compile.rsp')

# 1. 写响应文件（UTF-8 无 BOM）——g++ 从这里读取所有参数，绕过命令行编码
$content = "-fdiagnostics-color=always`n-g`n`"$Source`"`n-o`n`"$tmpOut`""
[IO.File]::WriteAllText($rspPath, $content, [Text.Encoding]::UTF8)

# 2. 用响应文件编译
& 'D:\mingw\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe' "@$rspPath"
$gppExit = $LASTEXITCODE

Remove-Item $rspPath -ErrorAction SilentlyContinue

if ($gppExit -ne 0) { exit $gppExit }

# 3. 重命名为正确的中文输出名
if (Test-Path $tmpOut) {
    Rename-Item -LiteralPath $tmpOut -NewName (Split-Path $Output -Leaf) -Force
}

Write-Host "OK: compiled to $Output"