#include <bits/stdc++.h>
using namespace std;

vector<long long int> v;
int main()
{
    ios::sync_with_stdio(0);
    long long int n, m;
    long long int a, b, val;
    cin >> n >> m;
    v.resize(n+1, 0);
    for (long long int i = 0; i < m; i++)
    {
        cin >> a >> b >> val;
        v[a] +=val;
        if(b+1 <=n) v[b+1]-=val;
    }
    long long int mex = INT_MIN;
    long long int curr=0;
    for (auto &i : v)
    {
        curr += i;
        mex= max(curr,mex);
    }
    cout << mex << endl;
}