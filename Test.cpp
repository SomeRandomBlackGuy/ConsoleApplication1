// Word Jumble

/*

Done **By hand, choose 10 single code words of your choice, and write down a hint for each word.
Done **Create a new C++ project called Keywords
Done **This Code Breaker Training Simulation Program should give the user directions and tell them what it is and how to use it based of the background description above.
Then your Code Breaker Training Simulation Program should randomly select 3 of the 10 words that are coded in your program.
Your code breaker will scramble each word on the fly and different each run randomly.
Now make the user try to solve each one of the three randomly picked coded word from your random list.
Each turn you should give your user feedback on if they got the guess correct or not.
You should also offer the user help.
At the end, you should display their stats and ask if they would like to try again.
After you have a project, publish your code to a new GitHub repository.

*/
#include "stdafx.h"// imported libraries
#include <iostream>// imported libraries
#include <string>// imported libraries
#include <cstdlib>// imported libraries
#include <ctime>// imported libraries


using namespace std; // elimainates need for prefixes when importing libraries

int main()
{
	enum fields { WORD, HINT, NUM_FIELDS }; //enumerators for all of the key words
	const int NUM_WORDS = 10; // 10 num words
	int num_correct = 0; // number of correct guess int set to 0
	const string WORDS[NUM_WORDS][NUM_FIELDS] = // all of the scrabbled words
	{
		{ "treason", "Benedict Arnolds crime?" },
		{ "sabotage", "any undermining of a cause." },
		{ "cipher", "a coded message" },
		{ "CIA", "the organization that you work for" },
		{ "honor", "high respect as for worth, merit, or rank" },
		{ "integrity", "adherence to moral and ethical principles" },
		{ "undercover", "working or done out of public sight" },
		{ "espionage", "the act or practice of spying" },
		{ "sacrifice", "the surrender or destruction of something prized or desirable for the sake of something considered as having a higher or more pressing claim" },
		{ "resolve", "to come to a definite or earnest decision about" }
	};
	enum difficulty // used to measure the difficulty 
	{
		EASY, MEDIUM, HARD, NUM_DIFF_LEVELS
	};

	cout << "These are " << NUM_DIFF_LEVELS << "difficulty levels.";

	for (int num = 0; num < 3; ++num) // controlls iterations for the program to stop at three

	{



		srand(static_cast<unsigned int> (time(0))); // creates random
		int choice = (rand() % NUM_WORDS); // chooses random word
		string theWord = WORDS[choice][WORD]; // connect ran to word
		string theHint = WORDS[choice][HINT]; // connects word to hint
		string jumble = theWord;
		string guess;
		int length = jumble.size(); 
		for (int i = 0; i < length; ++i)
		{
			int index1 = (rand() % length);
			int index2 = (rand() % length);
			char temp = jumble[index1];
			jumble[index1] = jumble[index2];
			jumble[index2] = temp;
		}
		cout << "\t\t\tWelcome to the Word Jumble!\n\n";
		cout << "Unscramble the letters to make a word.\n";
		cout << "Enter 'hint' for a hint.\n";
		cout << "Enter 'quit' to quit the game.\n\n";
		cout << "The jumble is: " << jumble; // displays jumbled word 

		cout << "\n\nYour guess: ";
		cin >> guess; 


		while ((guess != theWord) && (guess != "quit") && (num_correct != 3)) // while loop that controls guess
		{
			if (guess == "hint") // used for hints
			{
				cout << theHint;
			}
			else // informs of incorrect answer
			{
				cout << "Sorry, that's not it.";
			}
			cout << "\n\nYour guess: ";
			cin >> guess;
		}
		if (guess == theWord) // informs of correct answer
		{
			cout << "\nThat's it! You guessed it!\n\n;";
			++num_correct;
		}
	
		system("pause\n\n"); // system pause
	}cout << "\nThanks for playing. \n\n";
	
	// End of for loop
	return 0;

}