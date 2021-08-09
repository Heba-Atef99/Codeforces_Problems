#include<iostream>
#include<algorithm>
#include<map>

using namespace std;
int binary_search(int array[], int l, int r, int search_item);

int main()
{
	//Problem E: Number of pairs
	int S, N;
	cin >> S >> N;
	int* numbers = new int[S];
	if (numbers == NULL)
	{
		cout << "Segmintation Fault";
		return 1;
	}

	for (int i = 0; i < S; i++)
	{
		cin >> numbers[i];
	}

	int sum_exist = 0;
	int pairs = 0;
	int operand = 0;
	sort(numbers, numbers + S);
	map<int, int> repeatance;

	//calculate the repeatence of each number
	for (int i = 0; i < S - 1;)
	{
		repeatance[numbers[i]] = 1;
		operand = numbers[i];
		if (i == 0) operand = numbers[0];
		while (i < S - 1)
		{
			if (numbers[++i] == operand)
				repeatance[operand]++;
			else
				break;
		}
	}
	if (numbers[S - 1] != numbers[S - 2])
	{
		repeatance[numbers[S - 1]] = 1;
	}

	for (int i = 0; i < S - 1; i++)
	{
		operand = N - numbers[i];
		sum_exist = binary_search(numbers, i + 1, S - 1, operand);

		//check if there is pair that exist
		if (sum_exist)
		{
			pairs += repeatance[operand];
		}
	}
	cout << pairs << "\n";
	delete[] numbers;
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