#include <bits/stdc++.h>
using namespace std;
string u(string s)
{
    string ss(s);
    ss[1] = s[2], ss[2] = s[4], ss[3] = s[1], ss[4] = s[3];
    return ss;
}
string d(string s)
{
    string ss(s);
    ss[0] = s[4], ss[1] = s[0], ss[4] = s[5], ss[5] = s[1];
    return ss;
}

bool rot(string a, string b, int m)
{
    if (a == b)
        return true;
    if (m > 4)
        return false;
    if (rot(u(a), b, m + 1))
        return true;
    if (rot(d(a), b, m + 1))
        return true;
    return false;
}

int main()
{
    string s;
    while (cin >> s)
    {
        string a = s.substr(0, 6);
        string b = s.substr(6, 12);
        (rot(a, b, 0)) ? cout << "TRUE" : cout << "FALSE";
        cout << endl;
    }
}