#include <bits/stdc++.h>
using namespace std;

int n, m;
pair<int, int> a, b;
vector<pair<int, int>> vp;
bool g = false;

void rec(int st, int fn, vector<int> dom)
{
    if (g)
        return;
    if (dom.size() == n && st == fn)
    {
        // printf("wtf st: %d  fin: %d size=%d\n",st,fn,dom.size());
        g = true;
        return;
    }
    if (dom.size() > n){
        // printf("failed\n");
        return;
    }

    for (int i = 0; i < m; i++)
    {
        if (find(dom.begin(), dom.end(), i) == dom.end())
        {
            if (vp[i].first == st)
            {
                // printf("%d %d\n",vp[i].first,vp[i].second);
                dom.push_back(i);
                rec(vp[i].second, fn, dom);
                dom.pop_back();
            }
            else if (vp[i].second == st)
            {
                // printf("%d %d\n",vp[i].second,vp[i].first);
                dom.push_back(i);
                rec(vp[i].first, fn, dom);
                dom.pop_back();
            }
        }
        if (g)
            return;
    }
}

int main()
{
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        cin >> m;
        cin >> a.first >> a.second >> b.first >> b.second;
        vp.resize(m);
        for (int i = 0; i < m; i++)
        {
            cin >> vp[i].first >> vp[i].second;
        }
        // rec(a.first, b.first, vector<int>());
        // rec(a.first, b.second, vector<int>());
        rec(a.second, b.first, vector<int>());
        // rec(a.second, b.second, vector<int>());

        (g) ? printf("YES\n") : printf("NO\n");
        g = false;
        vp.clear();
    }
}