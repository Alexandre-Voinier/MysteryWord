#include <ctime>
#include <iostream>
#include <string>

#include "getMysteryWord.h"
#include "guessMysteryWord.h"
#include "shuffleMysteryWord.h"

using namespace std;

bool playAgain()
{
	char c;
	do
	{
		cout << "Do you want to play again ? (y/n): ";
		cin >> c;
	} while (c != 'y' && c != 'n');
	
	return c == 'y' ? true : false;
}


int main()
{
	srand(time(NULL));

	cout << "Welcome to the mystery word game !" << endl;

	bool wannaPlay(true);

	while (wannaPlay)
	{
		string mysteryWord(getMysteryWord());

		string shuffledMysteryWord(shuffleMysteryWord(mysteryWord));

		do
		{
			cout << "What is this word: " << shuffledMysteryWord << endl;
		} while (!guessMysteryWord(mysteryWord));

		cout << "Congratulation you guessed the mystery word" << endl;
		
		wannaPlay = playAgain();
	}

	return 0;
}
