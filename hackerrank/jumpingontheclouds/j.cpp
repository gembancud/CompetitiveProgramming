#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        c[i] = x;
    }
    int tm = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (c[i] == 1)
        {
            int moves = (count / 2) + 1;
            tm += moves;
            count = 0;
        }
        else
            count++;
    }
    tm += (count / 2);
    cout << tm << endl;
}