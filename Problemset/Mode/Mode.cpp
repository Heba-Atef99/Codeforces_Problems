#include<iostream>
#include<string>
#include<math.h>
#include <algorithm>


using namespace std;

int main()
{
	//Problem B: What is "mode" value?
	int N;
	cin >> N;
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

	//sort the array
	sort(array, array + N);

	int max_repeated_times = 0;
	int mode_val = 0;
	int value = array[0];
	int repeated_times = 0;

	for (int i = 0, j = 0; i < N;)
	{
		while (value == array[i])
		{
			i++;
			repeated_times++;
			if (i == N) break;
		}

		//compare the max appearance & store the mode
		if (repeated_times > max_repeated_times)
		{
			max_repeated_times = repeated_times;
			mode_val = value;
		}
		else if (repeated_times == max_repeated_times)
		{
			mode_val = (mode_val < value) ? value : mode_val;
		}

		value = array[i];
		repeated_times = 0;
	}

	cout << mode_val << "\n";

	delete[] array;
	return 0;
}