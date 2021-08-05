#include<iostream>


using namespace std;
void binary_search(int array[], int l, int r, int search_item);
void print_array(int array[], int start, int end);

int main()
{
	int search_item;
	cin >> search_item;

	int N;
	cin >> N;

	int* array = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> array[i];
	}
	binary_search(array, 0, N - 1, search_item);

	delete[] array;
	return 0;
}
void binary_search(int array[], int l, int r, int search_item)
{
	if (l > r || r < 0)
	{
		cout << "NO\n";
		return;
	}
	int mid = array[(r + l) / 2];
	if (mid == search_item)
	{
		cout << "YES\n";
		return;
	}
	else if (search_item > mid)
	{
		print_array(array, ((r + l) / 2) + 1, r);
		binary_search(array, ((r + l) / 2) + 1, r, search_item);
	}
	else
	{
		print_array(array, l, ((r + l) / 2) - 1);
		binary_search(array, l, ((r + l) / 2) - 1, search_item);
	}
}

void print_array(int array[], int start, int end)
{
	short valid = (start <= end) ? 1 : 0;
	while (start <= end)
	{
		cout << array[start] << " ";
		start++;
	}

	if (valid)
		cout << "\n";
}