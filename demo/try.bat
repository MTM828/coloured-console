g++ main.cpp -oDemo.exe -I../src
@pause

call Demo.exe
@echo Program finished with exit status %errorlevel%
@pause