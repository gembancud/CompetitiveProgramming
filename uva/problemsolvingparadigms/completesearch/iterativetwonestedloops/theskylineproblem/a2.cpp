#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> l, h, r;
    int a, b, c;
    int rmx = INT_MIN;
    while (cin >> a >> b >> c)
    {
        l.push_back(a);
        h.push_back(b);
        r.push_back(c);
        rmx = max(rmx, c);
    }
    int ch = 0;
    for (int i = 0; i <= rmx; i++)
    {
        int cmx = 0;
        for (int j = 0; j < l.size(); j++)
        {
            if (l[j] < i && r[j] > i)
                cmx = max(cmx, h[j]);
        }
        if (ch < cmx)
        {
            printf("%d %d", i - 1, cmx);
            ch = cmx;
            if (i < rmx)
                printf(" ");
        }
        else if (ch > cmx)
        {
            printf("%d %d", i, cmx);
            ch = cmx;
            if (i < rmx)
                printf(" ");
        }
    }
}