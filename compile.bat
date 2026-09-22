@echo off
chcp 65001 >nul
D:\mingw\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe -fdiagnostics-color=always -g %1 -o %2