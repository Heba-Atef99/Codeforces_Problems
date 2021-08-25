#include<iostream>
#include<conio.h>
#include<map>
using namespace std;

// Link of the problem
// https://codeforces.com/contest/66/problem/B

int count_watered_right(int sections[], int size, int index)
{
	if (index >= 0 && index < size && index + 1 < size)
	{
		if (sections[index + 1] <= sections[index])
		{
			return 1 + count_watered_right(sections, size, index + 1);
		}
	}
	return 0;
}

int count_watered_left(int sections[], int size, int index)
{
	if (index >= 0 && index < size && index - 1 >= 0)
	{
		if (sections[index - 1] <= sections[index])
		{
			return 1 + count_watered_left(sections, size, index - 1);
		}
	}
	return 0;
}


int main()
{
	int n = 0, watered_sections = 1, next_watered_sections = 1;
	int* sections = new int[n];

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> sections[i];
	}

	for (int i = 0; i < n; i++)
	{
		next_watered_sections = count_watered_right(sections, n, i) + count_watered_left(sections, n, i) + 1;
		watered_sections = (watered_sections > next_watered_sections) ? watered_sections : next_watered_sections;
	}


	cout << watered_sections;
	return 0;
}

//Another Solution but its actuall the same :"
/*
int main()
{
	int n = 0, watered_sections = 1, next_watered_sections = 1;
	int* sections = new int[n];
	multimap<int, int, greater <int>> index_section;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> sections[i];
		index_section.insert({sections[i], i});
	}

	for (auto itr = index_section.begin(); itr != index_section.end(); ++itr)
	{
		next_watered_sections = count_watered_right(sections, n, itr->second) + count_watered_left(sections, n, itr->second) + 1;
		watered_sections = (watered_sections > next_watered_sections) ? watered_sections : next_watered_sections;
	}


	cout << watered_sections;
	return 0;
}*/