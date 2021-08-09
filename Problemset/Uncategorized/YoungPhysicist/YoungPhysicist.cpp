#include <iostream>

using namespace std;

int main()
{
	int n; // number of forces
	int x, y, z; //components of the force in x, y & z directions
	int sum[3] = {0}; //sum of each component
	
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		//get the components from user
		cin >> x >> y >> z;

		//calculate the sum of each component
		sum[0] += x;
		sum[1] += y;
		sum[2] += z;
	}

	//check if the sum of all components equals zero then the body is in equilibruim
	if (sum[0] == 0 && sum[1] == 0 && sum[2] == 0)
	{
		cout << "YES" << "\n";
	}

	else
	{
		cout << "NO" << "\n";
	}

	return 0;
}