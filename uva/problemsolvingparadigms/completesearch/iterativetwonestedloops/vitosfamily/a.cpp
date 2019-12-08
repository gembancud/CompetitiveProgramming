#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r;
        cin >> r;
        vector<int> v(r);
        for (auto &i : v)
            cin >> i;
        int tot = INT_MAX;
        for (int i = 1; i <= 30000; i++)
        {
            int td = 0;
            for (auto &j : v)
            {
                td += abs(j - i);
            }
            tot = min(tot, td);
        }
        cout << tot << endl;
    }
}