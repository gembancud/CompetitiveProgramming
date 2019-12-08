#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(100, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x]++;
    }
    int mx = 0;
    for (int i = 1; i < n; i++)
    {
        mx = max(mx,v[i]+v[i-1]);
    }
    cout <<mx;
}