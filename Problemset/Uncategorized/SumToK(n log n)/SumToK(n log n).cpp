#include<iostream>
#include<string>
#include<math.h>
#include <algorithm>

using namespace std;

int binary_search(int array[], int l, int r, int search_item);

int main()
{
	//Problem D; Sum to k (n log n)
	int N, K;
	cin >> N >> K;
	int* array = new int[N];
	if (array == NULL)
	{
		cout << "Segmintation Fault";
		return 1;
	}

	for (int i = 0; i < N; i++)
	{
		cin >> array[i];
	}

	int half_exist = 0;
	int sum_exist = 0;
	sort(array, array + N);

	for (int i = 0; i < N; i++)
	{
		sum_exist = binary_search(array, i, N - 1, K - array[i]);
		if (sum_exist)
		{
			if (array[i] < K - array[i])
			{
				cout << "Yes\n" << array[i] << " " << K - array[i];
				return 0;
			}
			cout << "Yes\n" << K - array[i] << " " << array[i];
			return 0;

		}
		half_exist = (array[i] == K / 2) ? 1 : 0;
	}

	if (half_exist)
	{
		cout << "Yes\n" << K / 2 << " " << K / 2;
		return 0;
	}
	cout << "No\n";

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