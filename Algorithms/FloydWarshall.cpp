#include <bits/stdc++.h>
using namespace std;

int main (){
    int mx=INT_MIN;
    vector<vector<int>> g(10,vector<int>(10));
    for(int k=0;k<10;k++){
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(g[i][k]+g[k][j] <g[i][j])
                g[i][j]= g[i][k]+g[k][j];
            }
        }
    }
}