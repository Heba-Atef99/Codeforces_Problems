#include <iostream>
#include <cstdlib>

using namespace std;

// Link of the problem
// https://codeforces.com/contest/263/problem/A

int main()
{
	//declare variables
	int matrix[5][5];
	int steps = 0; //steps fot matrix to be beautiful

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			//get values of matrix from user
			cin >> matrix[i][j];

			if (matrix[i][j] == 1)
			{
				//calculate the min distance
				steps = abs(i - 2) + abs(j - 2);
			}
		}
	}

	cout << steps << "\n";
	return 0;
}