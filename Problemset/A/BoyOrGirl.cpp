#include<iostream>
#include<conio.h>
#include<string>
#include<set> 
using namespace std;

// Link of the problem
// https://codeforces.com/contest/236/problem/A

int main()
{
	//get the name from uset and save its length
	string name;
	cin >> name;
	int length = name.length();

	//create a set to store each character as the set stores unique char
	set<char> characters;

	//loop over the characters in the name and store each one in the set
	for (int i = 0; i < length; i++)
	{
		characters.insert(name[i]);
	}

	//check the size of the set to determine the gender of the user
	if (characters.size() % 2 == 0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";

	_getch();
	return 0;
}