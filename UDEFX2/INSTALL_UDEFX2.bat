@echo off
:: Goto current directory
cd /d "%~dp0"

devcon.exe install UDEFX2.inf Root\UDEFX2

pause
