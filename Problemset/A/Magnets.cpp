#include<iostream>
#include<conio.h>
#include <string>

using namespace std;

// Link of the problem
// https://codeforces.com/contest/344/problem/A

int main()
{
	//groups number is the number of gaps + 1
	int n = 0, groups_num = 1, last_end = 0;
	cin >> n;
	string m;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		
		//compare the beginig of the new magnet with the end of the last magnet
		if (i != 0)
		{
			//then there is a gap 
			if (last_end == m[0]) groups_num++;
		}
		last_end = m[1];
	}

	cout << groups_num;
	_getch();
	return 0;
}