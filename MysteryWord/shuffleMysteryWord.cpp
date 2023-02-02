#include <cstdlib>
#include <string>

#include "shuffleMysteryWord.h"

using namespace std;

string shuffleMysteryWord(string mysteryWord)
{
	string shuffledMysteryWord;

	while (mysteryWord.size() > 0)
	{
		int pos = rand() % mysteryWord.size();
		shuffledMysteryWord.push_back(mysteryWord[pos]);
		mysteryWord.erase(pos, 1);
	}

	return shuffledMysteryWord;
}