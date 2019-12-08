#include <iostream>
#include <bits/stdc++.h>
using namespace std;

map<string, int> s, gd;
bool cmp(const string &a, const string &b){
    if(s[a]>s[b]) return 1;
    if(s[a]<s[b]) return 0;
    if(gd[a]>gd[b]) return 1;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        s.clear();
        gd.clear();
        set<string> t;
        for (int j = 0; j < 12; j++)
        {
            string t1, t2, d;
            int s1, s2;
            cin >> t1 >> s1 >> d >> s2 >> t2;
            if (s1 > s2)
            {
                s[t1] += 3;
            }
            else if (s1 < s2)
            {
                s[t2] += 3;
            }
            else
            {
                s[t1] += 1;
                s[t2] += 1;
            }
            gd[t1] += s1 - s2;
            gd[t2] += s2 - s1;
            t.insert(t1);
            t.insert(t2);
        }
        vector<string> v(t.begin(),t.end());
        sort(v.begin(),v.end(),cmp);
        cout << v[0] << " " << v[1] << endl;
    }
}