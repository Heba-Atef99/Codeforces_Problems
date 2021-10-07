#include<iostream>
using namespace std;

// Link of the problem
// https://codeforces.com/contest/294/problem/A

int main()
{
    int n = 0;
    cin >> n;

    int* oskols = new int(n);
    for (int i = 0; i < n; i++)
    {
        cin >> oskols[i];
    }

    int m = 0;
    cin >> m;
    int total_birds = 0;
    for (int i = 0, x = 0, y = 0; i < m; i++)
    {
        cin >> x >> y;
        x -= 1;
        total_birds = oskols[x];
        if (x == 0)
        {
            oskols[x + 1] += total_birds - y;
        }
        else if (x == n - 1)
        {
            oskols[x - 1] += y - 1;

        }
        else
        {
            oskols[x + 1] += total_birds - y;
            oskols[x - 1] += y - 1;
        }
        oskols[x] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << oskols[i] << '\n';
    }
    return 0;
}
