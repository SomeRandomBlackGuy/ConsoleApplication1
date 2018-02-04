
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0))); //seed random number generatoin
	int secretNumber = rand() % +64; // sets secret to random

	int tries = 0; // Tries for the human
	int guess; // Guess for human
	int correct = 0; // correct gue
	int HKv3 = 0;
	int HKv3_Tries = 0; // Calculates tries
	int HKv3_Done = 0; // ends loop
	int HKv3_High = 64; // high number in the array
	int HKv3_Low = 1; // low number in the array

	while (HKv3_Done != 1)
	{

		if (secretNumber > HKv3)
		{
			HKv3_Low = HKv3 + 1; // If secret number is greater than
			HKv3_Tries++; // adds to tries
		}
		else if (secretNumber < HKv3) // If secret number is less than
		{
			HKv3_High = HKv3 - 1;
			HKv3_Tries++;// adds to tries if target not found

		}
		if (HKv3 == secretNumber) // Test if the target was found
		{
			HKv3_Done++;// ends the loop
		}
		HKv3 = ((HKv3_High - HKv3_Low) / 2) + HKv3_Low; //The eqaution
	}
	cout << "The secret number is " << secretNumber << "\n\n";
	cout << "It took " << HKv3_Tries << " to find the target\n\n";
	system("pause");
}
