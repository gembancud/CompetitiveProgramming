#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        long x;
        x = n / k;
        if (x % k == 0)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }
}