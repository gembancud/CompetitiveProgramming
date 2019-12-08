#include <bits/stdc++.h>
using namespace std;

// vector<vector<int>> fw(vector<vector<int>> g)
// {
//     for (int k = 0; k < g[0].size(); k++)
//     {
//         for (int i = 0; i < g[0].size(); i++)
//         {
//             for (int j = 0; j < g[0].size(); j++)
//             {
//                 if (g[i][k] + g[k][j] < g[i][j] &&g[i][k]!=INT_MAX && g[k][j]!=INT_MAX)
//                     g[i][j] = g[i][k] + g[k][j];
//             }
//         }
//     }
//     return g;
// }

set<int> res;
void dfs(int i, vector<vector<int>> g)
{
    // printf("%d ",i+1);
    for (auto &j : g[i])
    {
        res.insert(j);
        if (!binary_search(res.begin(), res.end(), j))
            dfs(j, g);
    }
}

void printg(vector<vector<int>> g)
{
    for (auto &i : g)
    {
        for (auto &j : i)
        {
            printf("%d ", j);
        }
        cout << endl;
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        vector<vector<int>> g(n);
        int i, j;
        while (cin >> i)
        {
            if (i == 0)
            {
                break;
            }
            while (cin >> j)
            {
                if (j == 0)
                    break;
                g[i - 1].push_back(j - 1);
                // g[i - 1][j - 1] = 1;
                // printf("%d,%d is now %d\n", i - 1, j - 1, g[i - 1][j - 1]);
            }
            // cout << endl;
        }
        // printf(" oten1\n");

        printg(g);
        // printf(" oten\n");
        // auto res = fw(g);
        // printg(res);
        // printf(" oten2\n");

        int q;
        cin >> q;
        for (int qq = 0; qq < q; qq++)
        {
            int x;
            cin >> x;
            res.clear();
            printf("debug\n");
            dfs(x - 1, g);
            printf("debug2\n");
            for (int i = 0; i < n; i++)
            {
                if (!binary_search(res.begin(), res.end(), i))
                    printf("%d ", i + 1);
            }
            cout << endl;
        }
    }
}