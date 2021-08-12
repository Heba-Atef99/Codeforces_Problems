#include<iostream>
#include<conio.h>
using namespace std;

// Link of the problem
// https://codeforces.com/contest/677/problem/A

int main()
{
	//n is number of friends ,, h is height of fence ,, w is the min width of the road
	//a is the height of each person
	int n = 0, h = 0, w = 0, a = 0;
	cin >> n >> h;

	for (int i = 0; i < n; i++)
	{
		cin >> a;

		//if height of person is bigger than the fence height then he should bend
		//make the width of road increase by 2
		//otherwise each person make the width of road increase by 1
		if (a > h) w += 2;
		else w++;
	}


	cout << w;
	_getch();
	return 0;
}