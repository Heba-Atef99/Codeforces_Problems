#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

// Link of the problem
// https://codeforces.com/contest/266/problem/A

int main()
{
	int n = 0, stones_removed = 0;
	cin >> n;

	string s;
	cin >> s;
	
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i] == s[i + 1])
		{
			stones_removed++;
		}

	}

	cout << stones_removed;
	_getch();
	return 0;
}