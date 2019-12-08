#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    map<int, int> v;
    vector<int> ar;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ar.push_back(x);
    }
    for (int i = 0; i < ar.size(); i++)
    {
        int val = ar[i];
        v[val]++;
    }
    int sum = 0;
    for (auto i = v.begin(); i != v.end(); i++)
    {
        int z = i->second;
        sum += z / 2;
    }
    cout << sum << endl;
}