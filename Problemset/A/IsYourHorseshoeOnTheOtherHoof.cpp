#include<iostream>
#include<set>
using namespace std;

// Link of the problem
// https://codeforces.com/contest/228/problem/A


int main()
{
	int s = 0;
	set<int> horseshoes;
	for (int i = 0; i < 4; i++)
	{
		cin >> s;
		horseshoes.insert(s);
	}
	cout << 4 - horseshoes.size();
	return 0;
}
