#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;
    vector<long long> v;
    while (n--)
    {
        long long q;
        cin >> q;
        v.push_back(q);
    }
    sort(v.begin(), v.end());
    long long tot = 0;
    long long c = 0;
    for (auto i = v.begin(); i != v.end(); i++)
    {
        if (tot + *i <= m)
        {
            tot += *i;
            c++;
        }
    }
    cout << c << "\n";
}