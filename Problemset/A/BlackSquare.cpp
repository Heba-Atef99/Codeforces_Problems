#include<iostream>
#include<string>
using namespace std;

// Link of the problem
// https://codeforces.com/contest/431/problem/A


int main()
{
	string s1, s2, b;
	getline(cin, s1);
	getline(cin, s2);

	int a[4];
	int j = 0, calories = 0;

	//cut the string into 4 numbers
	for (int i = 0; i < 4; i++)
	{
		
		b = "";
		while (j < s1.length() && s1[j] != ' ')
		{
			b += s1[j];
			j++;
		}

		//to move on from the last space
		if (j < s1.length()) j++;

		a[i] = stoi(b);
	}

	//count the calories based on which strip the user pressed
	for (int i = 0; i < s2.length(); i++)
	{
		calories += a[(s2[i] - '0') - 1];
	}


	cout << calories;
	return 0;
}