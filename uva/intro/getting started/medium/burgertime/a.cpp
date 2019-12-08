#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        bool z = false;
        bool st = false;
        char curr;
        int dist;
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;
            if (x == 'Z')
                z = true;
            if (x == 'R' || x == 'D')
            {
                if (!st)
                {
                    curr = x;
                    st = true;
                    dist = 1;
                    continue;
                }
                else if (st)
                {
                    if (curr != x)
                    {
                        mn = min(dist, mn);
                        curr = x;
                    }
                    dist = 1;
                    continue;
                }
            }
            dist++;
        }
        (z) ? cout << 0 << endl : cout << mn << endl;
    }
}