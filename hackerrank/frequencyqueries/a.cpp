#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    long long q;
    cin >> q;
    map<int, int> m, fc;

    while (q--)
    {
        int qt, x;
        cin >> qt >> x;
        if (qt == 1)
        {
            if(fc[m[x]]>0) fc[m[x]]--;
            m[x]++;
            fc[m[x]]++;
        }
        else if (qt == 2)
        {
            if(fc[m[x]]>0) fc[m[x]]--;
            if(m[x]>0) m[x]--;
            fc[m[x]]++;
        }
        else if (qt == 3)
        {
            (fc[x] > 0) ? cout << 1 << "\n" : cout << 0 << "\n";
        }
    }
}
