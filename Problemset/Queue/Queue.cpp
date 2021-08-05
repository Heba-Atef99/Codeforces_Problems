#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int main()
{
	//Problem D: Queue
	unsigned short int n, m;
	cin >> m >> n;

	//array containing the time taken in each server
	//int *servers = new int[m];
	int* servers{ new int[m] {0} };

	queue<int> processes;
	int p;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		processes.push(p);

		if (i < m && !processes.empty())
		{
			//initialize the servers with the first processes
			servers[i] = processes.front();
			processes.pop();
		}
	}

	int total_time = 0;
	double avg_waiting_time = 0;

	while (!processes.empty())
	{
		sort(servers, servers + m);

		//add a process to the server that finishes first
		//which is the server with the least time
		avg_waiting_time += servers[0];
		servers[0] += processes.front();
		processes.pop();
	}

	sort(servers, servers + m);
	//the total time taken will be the max time taken in a server
	//which is the last element after sorting
	total_time = servers[m - 1];

	avg_waiting_time /= n;
	cout << total_time << " " << avg_waiting_time;

	delete[] servers;
	return 0;
}
