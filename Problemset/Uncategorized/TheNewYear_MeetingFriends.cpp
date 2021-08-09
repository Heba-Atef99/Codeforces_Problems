#include <iostream>

using namespace std;

// The link of the problem 
// https://codeforces.com/contest/723/problem/A

int getDistance(int x, int y, int z);

int main()
{
	//declare variables friends points
	int p1, p2, p3, distance = 0;

	//get inputs (friends points) from user
	cin >> p1 >> p2 >> p3;

	//calculate the min distance
	distance = getDistance(p1, p2, p3);

	cout << distance << "\n";
	return 0;
}


int getDistance(int x, int y, int z)
{
	int max, min;
	if (x > y && x > z)
	{
		//x is max
		max = x;
		if (y > z)
			min = z;
		else
			min = y;
	}
	//x is not the max value
	else if (y > z && y > x)
	{
		max = y;
		if (x < z)
			min = x;
		else
			min = z;
	}
	else
	{
		max = z;
		if (x < y)
			min = x;
		else
			min = y;
	}

	return max - min;
}