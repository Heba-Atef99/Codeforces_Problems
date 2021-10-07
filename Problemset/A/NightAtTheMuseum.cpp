#include<iostream>
#include<string>
using namespace std;

// Link of the problem
// https://codeforces.com/contest/731/problem/A


int main()
{
	string s;
	getline(cin, s);
	
	int num_rotations = 0;
	char pointer = 'a', next_letter;
	int forward_distance = 0, backward_distance = 0;
	for (int i = 0; i < s.length(); i++)
	{
		next_letter = s[i];
		forward_distance = abs(next_letter - pointer);
		backward_distance = 26 - forward_distance;
		
		num_rotations += (forward_distance < backward_distance) ? forward_distance : backward_distance;
		pointer = next_letter;
	}

	cout << num_rotations;
	return 0;
}
