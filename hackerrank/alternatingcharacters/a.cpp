#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        auto p = s.begin();
        int tc = 0;
        for (auto i = s.begin() + 1; i != s.end(); i++)
        {
            if (*p == *i)
            {
                tc++;
            }
            p = i;
        }
        cout << tc <<endl;
    }
}