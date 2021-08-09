#include <iostream>
#include <cstdint>
#include <math.h> 

using namespace std;

// The link of the problem
// https://codeforces.com/contest/318/problem/A

int main()
{
	//declare variables
	uint64_t index
		, number
		, middle
		, output;

	//get inputs from user
	cin >> number >> index;
	middle = ceil(number / 2.0);

	if (index > middle)
	{
		//search in even
		output = 2 * (index - middle);
	}

	else if (index < middle)
	{
		//search in odd
		output = (2 * index) - 1;
	}

	else
	{
		//last odd number
		output = (number % 2 == 0) ? number - 1 : number;
	}

	//print the output
	cout << output << "\n";
	return 0;
}