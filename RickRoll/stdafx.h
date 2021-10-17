#pragma once
#include <string>
#include <Windows.h>

class A{};

extern A cout = A();

int operator<<(A a, const char* _Val)
{ 
    char* path = new char[150];
    GetCurrentDirectoryA(150, path);
    std::string pathStr = std::string(path);
    std::string text = "Debug Assertion Failed!\n\nProgram:\n" + pathStr +
        "\\RickRoll.exe\nFileC:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Enterprise\\VC\\Tools\\MSVC\\14.29.30133\\include\\vector\nLine:1566\n\nExpression: vector subscript out of range\n\nFor information on how your program can cause an assertion failure, see the Visual C++ documentation on asserts.\n\n(Press Retry to debug the application)";
    MessageBoxA(nullptr, text.c_str(), "Microsoft Visual C++ Runtime Library", MB_ABORTRETRYIGNORE | MB_ICONERROR);
    ShellExecute(0, 0, L"www.youtube.com/watch?v=dQw4w9WgXcQ", 0, 0, SW_SHOW);
    return NULL;
}