#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

#include "getMysteryWord.h"

using namespace std;

string getMysteryWord()
{
	ifstream words("ods6.txt");
	if (!words)
	{
		cout << "An error occus while reading ods6.txt" << endl;
		return "";
	}

	int posWord = rand() % 386264;
	
	string mysteryWord("");

	for (int i = 0; i < posWord; i++)
	{
		if (!getline(words, mysteryWord))
		{
			cout << "Error while using getline" << endl;
			return "";
		}
	}

	if (!getline(words, mysteryWord))
	{
		cout << "Error while using getline" << endl;
		return "";
	}

	words.close();

	return mysteryWord;
}