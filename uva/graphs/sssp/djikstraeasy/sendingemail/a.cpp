#include <bits/stdc++.h>
using namespace std;

int mindist(vector<bool> sptset, vector<int> dist){
    int mnval = INT_MAX; int mnidx;
    for(int i=0;i<dist.size();i++){
        if(sptset[i] == false && dist[i]<= mnval) {
            mnval= dist[i];
            mnidx = i;
        }
    }
    return mnidx;
}

vector<int> djik(vector<vector<int>> g, int s){
    vector<int> dist(g.size(),INT_MAX);
    vector<bool> sptset(g.size(),false);
    dist[s] =0;
    for(int i=0;i<g.size();i++){
        int u = mindist(sptset,dist);
        sptset[u] = true;
        for(int v=0;v<g.size();v++){
            if(!sptset[v] && g[u][v] && dist[u]!= INT_MAX&&
            dist[u] + g[u][v] < dist[v]
            )
            dist[v] = dist[u] + g[u][v];
        }
    }
    return dist;
}

int cs=1;

int main(){
    int t;cin>>t;
    while(t--){
        int n,m,s,t;
        cin>>n>>m>>s>>t;
        vector<vector<int>> g(n,vector<int>(n,0));
        for(int i=0;i<m;i++){
            int a,b,c;cin>>a>>b>>c;
            g[a][b] =c;
            g[b][a] =c;
        }
        vector<int> res = djik(g,s);
        // printf("%d\n", res[t]);
        (res[t]!=INT_MAX) ? printf("Case %d: %d",cs++,res[t]): printf("Case %d: impossible",cs++);
        cout<<endl;
    }   
}