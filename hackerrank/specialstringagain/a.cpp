#include <bits/stdc++.h>
using namespace std;

bool isgood(string s)
{

    char p = s[0];
    int x = INT_MAX;
    if (s.size() % 2 == 1)
        x = s.size() / 2;
    int c = 0;
    for (auto &i : s)
    {
        if (c == x)
            continue;
        if (i != p)
            return false;
        c++;
    }
    return true;
}

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int tc = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            if (isgood(s.substr(i, j)))
                tc++;
        }
    }
    cout << tc;
}