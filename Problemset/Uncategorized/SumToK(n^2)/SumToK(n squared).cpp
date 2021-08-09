#include<iostream>


using namespace std;

int main()
{
	//Problem c
	int N, K;
	cin >> N >> K;
	int* array = new int[N];
	int sum_values[2];
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

	for (int i = 0; i < N; i++)
	{
		for (int j = i; j < N; j++)
		{
			if (array[i] + array[j] == K)
			{
				if (array[i] < array[j])
				{
					cout << "Yes\n" << array[i] << " " << array[j];
					return 0;
				}
				cout << "Yes\n" << array[j] << " " << array[i];
				return 0;
			}

			half_exist = (array[j] == K / 2) ? 1 : 0;
		}
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