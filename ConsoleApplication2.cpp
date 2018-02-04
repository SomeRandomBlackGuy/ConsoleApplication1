
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
	int Try_Again = 0;
	int play_again;

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

		int HKv2 = rand() % +64; // Generates random number for the player to guess
		int HKv2_Tries = 0;
		int HKv2_Done = 0;


		while (HKv2_Done != 1)
		{
			if (HKv2 != secretNumber) {
				++HKv2_Tries;

				HKv2 = rand() % +64;

			}
			else {
				HKv2 == secretNumber;
				++HKv2_Done;
			}
		}

		int HKv1 = 0;
		int HKv1_Tries = 0;
		int HKv1_Done = 0;


		while (HKv1_Done == 0)
		{
			if (HKv1 != secretNumber) {
				++HKv1;
				++HKv1_Tries;
			}
			else {
				HKv1 == secretNumber;
				++HKv1_Done;
			}
		}


		do { // Loop that keeps player guessing until they have the right number
			cout << "Find the target Agent!\n\n"; // Ask Player for input
			cin >> guess; // Recieves player input
			++tries; // Counts number of failed tries for the player

			if (guess > secretNumber) // Loop that infomrs player that the guess is to high
			{
				cout << "Too High!\n\n "; // Prints that the guess was too high
			}
			else if (guess < secretNumber) // Loop that informs the player that the guess was too low
			{
				cout << "Too low!\n\n "; // Prints that the guess was too low
			}
			else // Last part of the loop that informs the player that the answer is correct
			{
				cout << "\nThat's it! You got it in " << tries << " guesses!\n "; // Informs the player that the answer is correct

			}
		} while (guess != secretNumber);{

		cout << " All drones have now found the enemy.\n\n\n";
		cout << "The Enemy was hiding at grid location " << secretNumber << "\n\n\n\n";
		cout << "The Human Player using a human search took " << tries << " guesses to find the enemy location final target prediction was " << secretNumber << "\n\n";
		cout << "The AI Player using Linear Search took " << HKv1_Tries << " guesses to find the enemy location final target prediction was " << secretNumber << "\n\n";
		cout << "The AI Player using Random Search took " << HKv2_Tries << " guesses to find the enemy location final target prediction was " << secretNumber << "\n\n";
		cout << "The AI Player using Binary Search took " << HKv3_Tries << " guesses to find the enemy location final target prediction was " << secretNumber << "\n\n";
		system("pause");// System Pauses
	}
	cout << "Would you like to try again? 1 is yes 0 is no: ";

}
