#include <iostream>
#include <string>
#include<conio.h>


using namespace std;

int isVowel(char letter);

int main()
{
	//get the input from user
	string input, output;
	getline(cin, input);

	for (int i = 0; i < input.length(); i++)
	{
		//check if the letter is from the vowels
		if (!isVowel(input[i]))
		{
			//put . before the letter & lower that letter
			cout << '.' << (char)tolower(input[i]);
		}
	}

	_getch();
	return 0;
}

//check if the letter is a vowel or not
int isVowel(char letter)
{
	letter = tolower(letter);
	switch (letter)
	{
	case 'a': return 1;
	case 'e': return 1;
	case 'o': return 1;
	case 'y': return 1;
	case 'u': return 1;
	case 'i': return 1;
	default: return 0;
	}
}