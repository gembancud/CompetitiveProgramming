#include <bits/stdc++.h>
using namespace std;

int cs = 1;

set<int> nodes;

set<int> vis;
// void bfs(map<int, vector<int>> g, int i, int depth)
// {
//     queue<int> q;
//     q.push(i);
//     vis.insert(i);
//     int mydepth = 0;
//     int curr = 1;
//     while (!q.empty())
//     {
//         curr--;
//         int tmpi = q.front();
//         q.pop();
//         vector<int> tv = g[tmpi];
//         if (curr == 0)
//         {
//             mydepth++;
//         }

//         for (auto &j : tv)
//         {
//             if (!binary_search(vis.begin(), vis.end(), j))
//             {
//                 curr++;
//                 vis.insert(j);
//                 q.push(j);
//             }
//         }
//     }
// }

void dfs(map<int,vector<int>> g, int i,int mydepth, int maxdepth){
    if(mydepth== maxdepth) return;
    for(auto&j:g[i]){
        if(!binary_search(vis.begin(),vis.end(),j)){
            vis.insert(j);
            dfs(g,j,mydepth+1,maxdepth);
        }
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        map<int, vector<int>> g;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            g[a].push_back(b);
            g[b].push_back(a);
            nodes.insert(a);
            nodes.insert(b);
        }
        int x, y;
        while (cin >> x >> y)
        {
            int res = 0;
            if (x == 0 && y == 0)
                break;
            // bfs(g, x, y);
            vis.insert(x);
            dfs(g,x,0,y);
            // for (auto &i : vis)
            // {
            //     if (!binary_search(nodes.begin(), nodes.end(), i))
            //         res++;
            // }
            for(auto&z:vis) printf("%d ",z);
            printf("\nvs\n");
            for(auto&z:nodes) printf("%d ",z);
            printf("\n");

            printf("Case %d: %d nodes not reachable from node %d with TTL = %d\n", cs++, int(nodes.size() - vis.size()), x, y);
            vis.clear();
        }
        nodes.clear();
    }
}