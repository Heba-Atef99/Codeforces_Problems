#include <iostream>

using namespace std;

// The link of the problem 
// https://codeforces.com/contest/214/problem/A

int isRootInteger(int n, int m);

int main()
{
	int n, m; 
	int solution = 0; 
	//for all n & m in the first quadrature the solution would always be 1
	//as the two equations are parapolas when sketching them
	//but for certain cases the solution would be zero

	cin >> n >> m;

	//for these conditions is that one parapola does not exceed the limit of the
	//other one meaning that they will intersect in the first quad.
	if ((n * n > m) || (n < m * m) || n == m)
	{
		//making sure that the root is integer
		solution = isRootInteger(n, m);
	}

	cout << solution << "\n";

	return 0;
}

int isRootInteger(int n, int m)
{
	int limit = (n > m) ? n : m;
	int s = 0;
	for (int i = 0; i <= (limit / 2 + 1); i++)
	{
		for (int j = 0; j <= (limit / 2 + 1); j++)
		{
			if ((i * i + j == n) && (i + j * j == m))
				s++;
		}
	}

	return s;
}