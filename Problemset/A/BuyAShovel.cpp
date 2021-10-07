#include<iostream>
using namespace std;

// Link of the problem
// https://codeforces.com/contest/732/problem/A


int main()
{
	int k = 0, r = 0, num_shovels = 1;
	cin >> k >> r;

	int remainder_10 = (k * num_shovels) % 10;

	while (remainder_10 != 0 && remainder_10 != r)
	{
		num_shovels++;
		remainder_10 = (k * num_shovels) % 10;
	}
	
	cout << num_shovels;
	return 0;
}
