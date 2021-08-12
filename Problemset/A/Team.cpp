#include<iostream>
#include<conio.h>
using namespace std;

// Link of the problem
// https://codeforces.com/contest/231/problem/A

int main()
{
	//n is number of problems ,, sure_num is the number of sure people with the solution
	int n = 0, s = 0, sure_num = 0, total_solutions = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> s;
			sure_num += s;
		}
		
		//check if there is more than/equal to two friends are sure with their solution
		//so they can solve the problem
		if (sure_num >= 2) total_solutions++;

		sure_num = 0;
	}

	cout << total_solutions;
	_getch();
	return 0;
}