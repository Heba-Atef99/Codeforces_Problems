#include<iostream>
#include<string>
using namespace std;

// Link of the problem
// https://codeforces.com/contest/265/problem/A


int main()
{
	string stone, instruction;
	getline(cin, stone);
	getline(cin, instruction);

	int length_t = instruction.length();
	int moves = 1;

	// compare the stone standing on from s with the current instruction from t
	// loop over the instructions until the instructions are done
	for (int i = 0, j = 0; i < length_t; i++)
	{
		if (instruction[i] == stone[j])
		{
			moves++;
			j++;
		}
	}

	cout << moves;
	return 0;
}
