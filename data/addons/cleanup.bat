@echo off
echo Deleting all .cfg and .txt files...
del /s /q *.cfg
del /s /q *.txt

echo Deleting all folders...
for /d %%i in (*) do rmdir /s /q "%%i"

echo Cleanup complete.
pause