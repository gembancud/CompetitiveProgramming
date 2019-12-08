#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int n, d;
    cin >> n >> d;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.emplace_back(x);
    }
    int m = d % n;
    rotate(v.begin(), v.begin() + m, v.end());
    for (auto &i : v)
    {
        cout << i << " ";
    }
}