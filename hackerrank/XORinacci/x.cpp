#include <bits/stdc++.h>
using namespace std;

//!NOT SOLVED!
vector<long long> v(10000000000);
long long rec(long long n)
{
    if (n == 0)
        return v[0];
    if (n == 1)
        return v[1];
    if (v[n] != 0)
        return v[n];
    else
    {
        v[n] = rec(n - 1) ^ rec(n - 2);
        return v[n];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        v.clear();
        unsigned long long a, b, n;
        cin >> a >> b >> n;
        v[0] = a;
        v[1] = b;
        cout << rec(n) << endl;
    }
}
