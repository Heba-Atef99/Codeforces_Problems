#include<iostream>
#include<algorithm>
#include<map>
#include<string>
#include<queue>

using namespace std;

int main()
{
	//Problem C: Registration System
	int n;
	cin >> n;

	map <string, int> names;
	map <string, int>::iterator it;

	queue <string> output;
	string name;
	string new_name;
	for (int i = 0; i < n; i++)
	{
		cin >> name;
		if (i == 0)
		{
			names.insert(pair<string, int>(name, 0));
			output.push("OK");
		}
		else
		{
			it = names.find(name);

			//check if the name previously exist
			if (it == names.end())
			{
				//not found
				names.insert(pair<string, int>(name, 0));
				output.push("OK");
			}
			else
			{
				//found
				names[name]++;
				new_name = name + to_string(names[name]);
				names.insert(pair<string, int>(new_name, 0));
				output.push(new_name);
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << output.front() << "\n";
		output.pop();
	}
	return 0;
}