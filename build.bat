@echo off
g++ -static encrypt.cpp PFile.cpp base64.hpp -o encrypt.exe
strip encrypt.exe
echo.finished!
pause>nul