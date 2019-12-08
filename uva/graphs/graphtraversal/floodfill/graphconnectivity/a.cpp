#include <bits/stdc++.h>
using namespace std;
string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

set<set<int>> ssi;
int numsg = 0;
set<int> vis;

void dfs(int i, vector<vector<int>> g)
{
    for (auto &j : g[i])
    {
        if (!binary_search(vis.begin(), vis.end(), j))
        {
            vis.insert(j);
            dfs(j, g);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;
        int s = c - 'A' + 1;
        // printf("%d\n", s);
        vector<vector<int>> g(s);
        string qq;
        cin.ignore();
        while (getline(cin, qq))
        {
            printf("%s\n", qq.c_str());
            g[qq[0] - 'A'].push_back(qq[1] - 'A');
            g[qq[1] - 'A'].push_back(qq[0] - 'A');
            // cin.ignore();
        }
        // printf("bilat\n");
        for (int i = 0; i < s; i++)
        {
            vis.clear();
            dfs(i,g);
            ssi.insert(vis);
        }
        printf("%d\n", int(ssi.size()));
        ssi.clear();
        numsg = 0;
    }
}