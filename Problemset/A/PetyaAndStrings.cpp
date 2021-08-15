#include<iostream>
#include<conio.h>
#include <string>

using namespace std;

// Link of the problem
// https://codeforces.com/contest/112/problem/A

int main()
{
	string s1, s2;
	cin >> s1 >> s2;

	int length = s1.length();
	int difference = 0;
	for (int i = 0; i < length; i++)
	{
		difference = tolower(s1[i]) - tolower(s2[i]);
		if (difference < 0)
		{
			cout << -1;
			_getch();
			return 0;
		}

		else if (difference > 0)
		{
			cout << 1;
			_getch();
			return 0;
		}
	}
	
	cout << 0;
	_getch();
	return 0;
}