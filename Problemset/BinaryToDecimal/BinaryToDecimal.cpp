#include<iostream>
#include<string>
#include<math.h>


using namespace std;

int main()
{
	//Problem A: Binary to decimal
	string binary;
	long long int decimal = 0;

	cin >> binary;

	int size = binary.length();
	int bit = 0;
	for (int i = size - 1, j = 0; i >= 0; i--, j++)
	{
		bit = binary[i] - '0';
		if (bit != 0)
			decimal += bit * pow(2, j);
	}

	cout << decimal << "\n";

	return 0;
}