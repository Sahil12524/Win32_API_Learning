// WinMain.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Please change the project settings to use WinMain: Project -> Properties -> Linker -> System -> Subsystem -> Windows (/SUBSYSTEM:WINDOWS)

#include "pch.h"
#include <iostream>
#include <Windows.h>

int __stdcall WinMain(
	HINSTANCE hInstance,		//handle to current instance        eg. if you open a file with notepad, notepad is the current instance
	HINSTANCE hPrevInstance,	//handle to previous instance	    eg. if you open a file with notepad, notepad is the previous instance
	LPSTR lpCmdLine,			//command line arguments			eg. "C:\Program Files\MyApp\MyApp.exe" -arg1 -arg2
	int nShowCmd)				//show state of window				eg. minimized, maximized, etc.
{
	MessageBox(NULL, L"Hello World", L"Why am I doing this ? ", MB_OK);
}
