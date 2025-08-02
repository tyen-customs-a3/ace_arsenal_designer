@echo off
REM Setup script to create symbolic link for vanilla Arma 3 configs
REM Run this as Administrator

echo Creating symbolic link for vanilla Arma 3 configs...

cd /d "%~dp0data\addons"

echo Creating symlink: a3 -> P:\a3
mklink /D a3 "P:\a3"

echo.
echo Symbolic link created successfully!
echo You can now access vanilla configs through data/addons/a3/ directory
echo.
pause