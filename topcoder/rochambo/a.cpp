#include <bits/stdc++.h>
using namespace std;

//!Not Checked!
int rps(char e, char m)
{
    if (e == 'R' && m == 'R')
        return 0;
    if (e == 'R' && m == 'P')
        return 1;
    if (e == 'R' && m == 'S')
        return 0;
    if (e == 'S' && m == 'R')
        return 1;
    if (e == 'S' && m == 'P')
        return 0;
    if (e == 'S' && m == 'S')
        return 0;
    if (e == 'P' && m == 'R')
        return 0;
    if (e == 'P' && m == 'P')
        return 0;
    if (e == 'P' && m == 'S')
        return 1;
}
char win(char e)
{
    if (e == 'S')
        return 'R';
    if (e == 'P')
        return 'S';
    if (e == 'R')
        return 'P';
}
char other(char e1, char e2)
{
    if (e1 == 'R' && e2 == 'P')
        return 'S';
    if (e1 == 'R' && e2 == 'S')
        return 'P';
    if (e1 == 'S' && e2 == 'P')
        return 'R';
    if (e1 == 'S' && e2 == 'R')
        return 'P';
    if (e1 == 'P' && e2 == 'S')
        return 'R';
    if (e1 == 'P' && e2 == 'R')
        return 'S';
}

int main()
{
    string s;
    cin >> s;
    long wins = 0;
    vector<char> e(s.begin(), s.end());
    vector<char> m;
    m.push_back('R');
    m.push_back('R');

    for (int i = 0; i < e.size(); i++)
    {
        wins += rps(e[i], m[i]);
        if (i > 0)
        {
            if (e[i] == e[i - 1])
                m.push_back(win(e[i]));
            else
                m.push_back(win(other(e[i], e[i - 1])));
        }
    }
    cout << wins <<endl;
}