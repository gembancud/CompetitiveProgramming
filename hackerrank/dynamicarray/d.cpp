#include <bits/stdc++.h>
using namespace std;

vector<vector<long long int>> v;
int main()
{
    int n, q;
    cin >> n >> q;
    long long int la = 0;
    v.resize(n,vector<long long int>());
    while (q--)
    {
        int c, x, y;
        cin >> c >> x >> y;
        if (c == 1)
        {
            v[(x ^ la) % n].push_back(y);
        }
        else if (c == 2)
        {
            vector<long long int> *p = &v[(x ^ la) % n];
            int s = p->size();
            la = p->at(y % s);
            cout << la << endl;
        }
    }
}