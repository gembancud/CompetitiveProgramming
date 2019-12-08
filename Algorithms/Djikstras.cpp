#include <bits/stdc++.h>
using namespace std;

int mindist(vector<bool> sptset, vector<int> dist){
    int minval=INT_MAX;
    int minidx;
    for(int i=0;i<dist.size();i++){
        if(!sptset[i] && dist[i]<minval){
            minval = dist[i];
            minidx=i;
        }
    }
    return minidx;
}

vector<int> djikstras(vector<vector<int>> g, int src){
    vector<bool> sptset(10,false);
    vector<int> dist(10,INT_MAX);
    dist[src] = 0;
    for(int i=0;i<g[0].size();i++){
        int u = mindist(sptset,dist);
        sptset[u] = true;
        for(int j=0; j<g[u].size();j++){
            if(!sptset[j] && g[u][j] && g[u][j] != INT_MAX &&
            dist[u] +g[u][j] < dist[j])
            dist[j] = dist[u] + g[u][j];
        }
    }
    return dist;
}


int main(){
    vector<vector<int>> g(10,vector<int>(10));
    int src=0;
    djikstras(g,src);
}