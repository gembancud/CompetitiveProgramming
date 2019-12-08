#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int cc = 1;
    while (t--)
    {
        vector<vector<string>> map(101);
        int mx = 0;
        for (int i = 0; i < 10; i++)
        {
            string s;
            int x;
            cin >> s >> x;
            mx = max(mx, x);
            map[x].push_back(s);
        }
        printf("Case #%d:\n", cc);
        for (auto &i : map[mx])
        {
            cout << i << endl;
        }

        cc++;
    }
}