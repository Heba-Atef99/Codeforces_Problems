#include<iostream>
using namespace std;

// Link of the problem
// https://codeforces.com/contest/268/problem/A


int main()
{
	int n = 0, games = 0;
	cin >> n;
	int* home_uniforms = new int[n];
	int* guest_uniforms = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> home_uniforms[i] >> guest_uniforms[i];
	}

	for (int i = 0; i < n; i++)
	{
		games += count(guest_uniforms, guest_uniforms + n, home_uniforms[i]);
	}
	cout << games;
	return 0;
}
