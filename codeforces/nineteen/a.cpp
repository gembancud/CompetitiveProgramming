#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<char> v(s.begin(), s.end());
    map<char, int> m;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 'n' || v[i] == 'i' || v[i] == 'e' || v[i] == 't')
            m[v[i]]++;
    }
    int men = 0;
    m['n']--;
    while (m['n'] > 0 && m['i'] > 0 && m['t'] > 0 && m['e'] > 0)
    {
        m['n'] -= 2;
        m['i']--;
        m['t']--;
        m['e'] -= 3;
        if (m['n'] >= 0 && m['i'] >= 0 && m['t'] >= 0 && m['e'] >= 0)
            men++;
    }
    cout << men << endl;
}