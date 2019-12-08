#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int tp = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= 0)
                tp++;
        }
        (tp<k) ? cout << "YES" << endl : cout << "NO" << endl;
    }
}