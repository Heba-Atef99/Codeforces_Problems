#include<iostream>
#include<conio.h>
#include <string>
#include <algorithm>

using namespace std;

// Link of the problem
// https://codeforces.com/contest/59/problem/A

int main()
{
	string s;
	cin >> s;

	int length = s.length();
	int lower_num = 0, upper_num = 0;
	for (int i = 0; i < length; i++)
	{
		if (isupper(s[i]))
		{
			upper_num++;
		}

		else
		{
			lower_num++;
		}
	}

	if (upper_num > lower_num)
	{
		transform(s.begin(), s.end(), s.begin(), ::toupper);
	}
	else
	{
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	}

	cout << s;
	_getch();
	return 0;
}