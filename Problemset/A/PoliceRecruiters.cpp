#include<iostream>
using namespace std;

// Link of the problem
// https://codeforces.com/contest/427/problem/A


int main()
{
	int n = 0, police = 0, untreated_crimes = 0;
	cin >> n;
	int x = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> x;

		//negative number = untreated crime
		if (x < 0)
		{
			//incase of lack of police officers, then untreated crimes increases
			if (police == 0)
				untreated_crimes += x;

			//otherwise when there are police, then any upcoming crimes would be treated 
			else
				police += x;
		}

		//positive number = police officers available
		else
		{
			police += x;
		}
	}

	cout << untreated_crimes * -1;
	return 0;
}