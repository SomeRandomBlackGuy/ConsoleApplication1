// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0))); //seed random number generato
	int secretNumber = rand() % + 64;
	
	int tries = 0;
	int guess;

	cout << "\tWelcome to guess my number\n\n";
	

	do {
		cout << "Enter a guess";
		cin >> guess;
		++tries;

		if (guess > secretNumber)
		{
			cout << "Too High!\n\n";
		}
		else if (guess < secretNumber)
		{
			cout << "Too low!\n\n";
		}
		else
		{
			cout << "\nThat's it! You got it in " << tries << " guesses!\n";

		}
	} while (guess != secretNumber);
	system("pause");
	}


