#include <bits/stdc++.h>
using namespace std;

bool isuniqandfv(string &s)
{
    if (s.length() > 5)
        return false;
    unordered_map<char, int> m;
    for (auto &i : s)
        m[i]++;
    for (auto &i : m)
        if (i.second > 1)
            return false;
    return true;
}

bool sisuniq(string s)
{
    unordered_map<char, int> m;
    for (auto &i : s)
        m[i]++;
    for (auto &i : m)
        if (i.second > 1)
            return false;
    return true;
}

void addstr(string &s)
{
    int i = stoi(s);
    i++;
    s = to_string(i);
    if (s.length() < 5)
        s = "0" + s;
}

int main()
{
    int n;bool f=false;
    while (cin >> n)
    {
        if (n == 0)
            break;
        if(f) cout <<endl;
        vector<pair<string, string>> v;
        string st = "01234";
        while ((st).length() <= 5)
        {
            if (!isuniqandfv(st))
            {
                addstr(st);
                continue;
            }
            int x = stoi(st) * n;
            if (to_string(x).length() > 5)
                break;
            string sx = to_string(x);
            if (sx.length() < 5)
                sx = "0" + sx;
            string tmp = sx + st;
            if (sisuniq(tmp))
            {
                v.push_back(make_pair(sx,st));
            }
            addstr(st);
        }
        for (auto &i : v)
            printf("%s / %s = %d\n", i.first.c_str(), i.second.c_str(), n);
        if (v.empty())
            printf("There are no solutions for %d.\n", n);
        f=true;
    }
}