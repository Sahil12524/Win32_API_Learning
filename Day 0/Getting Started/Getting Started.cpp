// Getting Started.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <iostream>
#include <Windows.h>

int main()
{
    std::cout << "Hello World!\n";
    int code;
    code = MessageBox(NULL, L"Content", L"Title", MB_OKCANCEL);
    /*
    int MessageBox(
        [in, optional] HWND    hWnd,
        [in, optional] LPCTSTR lpText,    LPCTSTR aka Long Pointer to Const TCHAR String
        [in, optional] LPCTSTR lpCaption,
        [in]           UINT    uType
    );
    */
    if (code == IDOK) {
        std::cout << "OK\n";
    }
    else if (code == IDCANCEL) {
        std::cout << "Cancel\n";
    }
    else {
        std::cout << "Other\n";
    }
    // Home Work but more optimized
    code = MessageBox(NULL,
        L"Are you a man?",
        L"WTF really nigga?",
        MB_YESNO | MB_ICONEXCLAMATION);

    switch (code) {
    case IDYES:
        std::cout << "Yes, you are a man.\n";
        break;
    case IDNO:
        std::cout << "No, you aren't a man.\n";
        break;
    }

    return 0;
}
