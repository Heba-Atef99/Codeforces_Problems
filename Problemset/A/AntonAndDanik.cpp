#include<iostream>
#include<conio.h>
using namespace std;

// Link of the problem
// https://codeforces.com/contest/734/problem/A

int main()
{
	//n is number of games played ,, D is the number of games danik won
	//A is the number of games anton won
	int n = 0, A = 0, D = 0;
	cin >> n;

	string game, output;
	cin >> game;

	for (int i = 0; i < n; i++)
	{
		if (game[i] == 'A') A++;
		else if (game[i] == 'D') D++;
	}

	if (A > D) output = "Anton";
	else if (A < D) output = "Danik";
	else output = "Friendship";
	cout << output;

	_getch();
	return 0;
}