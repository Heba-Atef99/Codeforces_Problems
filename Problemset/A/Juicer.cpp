#include<iostream>
using namespace std;

// Link of the problem
// https://codeforces.com/contest/709/problem/A

int main()
{
    int n = 0, size_boundary = 0, waste_size = 0;
    cin >> n >> size_boundary >> waste_size;

    int juice = 0, orange = 0, num_empty = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> orange;
        if (orange <= size_boundary)
        {
            juice += orange;
            if (juice > waste_size)
            {
                juice = 0;
                num_empty++;
            }
        }
    }

    cout << num_empty;
    return 0;
}
