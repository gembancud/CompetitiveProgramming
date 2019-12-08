#include <bits/stdc++.h>
using namespace std;
vector<unsigned long long> v(100);

unsigned long long recur(int n)
{
    if (n == 1)
        return 1;
    else if (v[n] != 0)
        return v[n];
    else
    {
        v[n] = n * recur(n - 1);
        return v[n];
    }
}
int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        (n == 0) ? cout << 1 << endl : cout << recur(n) << endl;
    }
}