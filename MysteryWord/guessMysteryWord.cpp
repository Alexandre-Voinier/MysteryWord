#include <iostream>
#include <string>

#include "guessMysteryWord.h"

using namespace std;

bool guessMysteryWord(string mysteryWord)
{
	string guess("");

	cin >> guess;

	bool guessBool(guess.compare(mysteryWord) == 0);
	if (!guessBool)
		cout << "It's not the mystery word!" << endl;


	return guessBool;
}