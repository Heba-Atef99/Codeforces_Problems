#include<iostream>
#include<string>
using namespace std;

// Link of the problem
// https://codeforces.com/contest/9/problem/A

string fraction(double f)
{
	int num = 0, den = 1; 
	double product = 0;
	for (double i = 1; i <= 6; i++)
	{
		product = f * i;
		if (product - (int)product == 0) 
		{
			den = i;
			num = (int)product;
			break;
		}
	}

	string fraction = to_string((int)num) + "/" + to_string((int)den);
	return fraction;
}

int main()
{
	int Y = 0, W = 0;
	cin >> Y >> W;

	double chances = (Y > W) ? 6 - Y + 1 : 6 - W + 1;
	chances /= 6.0;

	string D = fraction(chances);
	cout << D;
	return 0;
}
