#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    int max = 0;
    int numofmax;
    for (auto &i : m)
    {
        printf("checking %d:%d \n", i.first, i.second);
        if (i.second == max)
        {
            if (i.first < numofmax)
            {

                numofmax = i.first;
                max = i.second;
            }
        }
        else if (i.second > max)
        {
            numofmax = i.first;
            max = i.second;
        }
    }
    cout << numofmax;
}