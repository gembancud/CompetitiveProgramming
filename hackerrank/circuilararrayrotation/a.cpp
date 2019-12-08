#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // for (auto &i : v)
    //     cout << i << ", ";
    // cout << endl;
    // printf("k is %d\n", k);
    k%=n;
    rotate(v.begin(), v.begin()+v.size()-k, v.end());
    // for (auto &i : v)
    //     cout << i << ", ";
    // cout << endl;

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        cout << v[x] << endl;
    }
}