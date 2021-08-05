#include <iostream>
#include <string>

using namespace std;
typedef struct abbriviate {
	char terminate[2];
	int length;
} abbriviate;

abbriviate abbreviatWord(string word);

int main()
{
	int n; //number of string inputs
	cin >> n;

	//Validate that n is with in the required range
	if (n < 1 || n > 100)
	{
		printf("You should enter a number between 1 & 100");
		return 2;
	}

	string* input = new string[n];

	//get the words from user
	for (int i = 0; i < n; i++)
	{
		//get the input from user
		cin >> input[i];
	}

	//print the output
	for (int i = 0; i < n; i++)
	{
		//for too long words
		if (input[i].length() > 10)
		{
			abbriviate w = abbreviatWord(input[i]);
			cout << w.terminate[0] << w.length << w.terminate[1] << "\n";
		}
		else
		{
			cout << input[i] << "\n";
		}
	}

	delete[] & input;
	return 0;
}

//get the abbreviation of a word
abbriviate abbreviatWord(string word)
{
	int length = word.length();
	abbriviate newWord;
	newWord.length = length - 2;
	newWord.terminate[0] = word[0];
	newWord.terminate[1] = word[length - 1];
	return  newWord;
}