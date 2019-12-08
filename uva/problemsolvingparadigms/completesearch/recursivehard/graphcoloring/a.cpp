#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
int n, k;

bool isvalid(int idx, vector<int> in)
{
    for (auto &i : in)
    {
        if (find(g[idx].begin(), g[idx].end(), i) != g[idx].end())
        {
            // printf("idx=%d present in %d\n", idx, i);
            return false;
        }
    }
    return true;
}

vector<int> rec(int idx, vector<int> in)
{
    if (idx == n)
        return in;

    if (isvalid(idx, in))
    {
        // printf("%d was allowable in ",idx+1); for(auto&i:in) printf(" %d",i);

        vector<int> tmpin = in;
        vector<int> resin1 = rec(idx + 1, in);
        if (resin1.size() > in.size())
            in = resin1;

        tmpin.push_back(idx);
        vector<int> resin2 = rec(idx + 1, tmpin);
        if (resin2.size() > in.size())
            in = resin2;
    }
    else
    {
        vector<int> resin1 = rec(idx + 1, in);
        if (resin1.size() > in.size())
            in = resin1;
    }

    return in;
}

int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        cin >> n >> k;
        g.resize(n);
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            g[x - 1].push_back(y - 1);
            g[y-1].push_back(x-1);
        }

        vector<int> res = rec(0, vector<int>());
        printf("%d\n", int(res.size()));
        bool fst=false;
        for (auto &i : res)
        {
            (fst) ? printf(" ") : fst = true;
            printf("%d", i + 1);
        }
        printf("\n");
        g.clear();
    }
}