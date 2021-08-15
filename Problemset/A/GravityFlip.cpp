#include<iostream>
#include<conio.h>
#include <set>

using namespace std;

// Link of the problem
// https://codeforces.com/contest/405/problem/A

int main()
{
	//n is number of columns 
	int n = 0, cube = 0;
	cin >> n;
	multiset<int> cubes;
	multiset<int>::iterator itr;

	//taking input from user
	for (int i = 0; i < n; i++)
	{
		cin >> cube;
		cubes.insert(cube);
	}

	//print the number of cubes after gravity flip
	for (itr = cubes.begin(); itr != cubes.end(); itr++)
	{
		cout << *itr << " ";
	}

	_getch();
	return 0;
}