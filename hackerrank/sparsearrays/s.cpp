#include <bits/stdc++.h>
using namespace std;

map<string, int> d;
int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        d[s]++;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        string qs;
        cin >> qs;
        cout << d[qs] << endl;
    }
}