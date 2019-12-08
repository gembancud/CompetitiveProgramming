#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int steps;
    string s;
    cin >> steps >> s;
    vector<char> v(s.begin(), s.end());
    int currloc = 0;
    int max = 0;
    int vc = 0;
    bool invalley = false;
    bool gd = false;
    for (const auto &i : v)
    {
        // cout << i <<" ";
        if (i == 'U')
        {
            currloc++;
            gd = false;
        }
        else if (i == 'D')
        {
            currloc--;
            gd = true;
        }
        if (currloc >= 0)
        {
            if(invalley)vc++;
            invalley = false;
        }
        if (currloc < 0)
        {
            invalley = true;
        }
    }
    cout << vc << endl;
}