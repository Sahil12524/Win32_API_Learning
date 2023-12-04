// Home Work Template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstdio>
#include <chrono>

int main()
{

	auto start = std::chrono::high_resolution_clock::now();
	while (true)
	{
		std::system("cls"); //clear the screen

		auto stop = std::chrono::high_resolution_clock::now();
		float deltaTime = (std::chrono::duration_cast<std::chrono::microseconds>(stop - start)).count() / 1'000'000.0f;
		start = stop;

		static float counter = 0.5; //0.5 secconds
		counter -= deltaTime;
		if (counter <= 0)
		{
			counter += 0.5; //0.5 secconds

			//move player
		}

		//get the player's input here

		//draw the game using std::cout
		std::cout << "0";
	}

	std::cin.get();
	return 0;
}
