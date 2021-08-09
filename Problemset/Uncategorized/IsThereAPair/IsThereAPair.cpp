#include<iostream>
#include <algorithm>


using namespace std;
int binary_search(int array[], int l, int r, int search_item);

int main()
{
	//Problem B: Is there a pair?
	int S, N;
	cin >> S >> N;
	int* array = new int[S];
	if (array == NULL)
	{
		cout << "Segmintation Fault";
		return 1;
	}

	for (int i = 0; i < S; i++)
	{
		cin >> array[i];
	}

	int sum_exist = 0;
	sort(array, array + S);

	for (int i = 0; i < S - 1; i++)
	{
		sum_exist = binary_search(array, i + 1, S - 1, N - array[i]);
		if (sum_exist)
		{
			cout << "YES\n";
			delete[] array;
			return 0;
		}
	}

	cout << "NO\n";

	delete[] array;
	return 0;
}

int binary_search(int array[], int l, int r, int search_item)
{
	if (l > r || r < 0)
	{
		return 0;
	}
	int mid = array[(r + l) / 2];
	if (mid == search_item) return 1;
	else if (search_item > mid)
	{
		binary_search(array, ((r + l) / 2) + 1, r, search_item);
	}
	else
	{
		binary_search(array, l, ((r + l) / 2) - 1, search_item);
	}
}