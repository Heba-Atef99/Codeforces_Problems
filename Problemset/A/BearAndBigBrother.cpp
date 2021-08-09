#include<iostream>
#include<conio.h>
using namespace std;

// Link of the problem
// https://codeforces.com/contest/791/problem/A

int main()
{
	//a is limak's weight ,, b is bob's weight
	int a = 0, b = 0, year = 0;
	cin >> a >> b;

	while (a <= b)
	{
		a *= 3;
		b *= 2;
		year++;
	}

	cout << year;
	_getch();
	return 0;
}