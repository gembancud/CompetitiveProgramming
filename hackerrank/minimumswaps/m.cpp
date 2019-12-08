#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int tmp;
        cin >> tmp;
        v.emplace_back(tmp);
    }
        int c = 1;
        int tot = 0;
        vector<int>::iterator s = v.begin();
        while (s != v.end())
        {
            while (*s != c)
            {
                swap(v[*s - 1], v[c - 1]);
                tot++;
            }
            advance(s, 1);
            c++;
        }
    cout << tot << endl;
}