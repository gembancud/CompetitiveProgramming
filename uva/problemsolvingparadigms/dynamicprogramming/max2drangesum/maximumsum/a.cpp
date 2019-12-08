#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(n));
    for(int i=0;i<n;i++) for(int j=0;j<n;j++){
        cin>>v[i][j];
        if(i>0) v[i][j] += v[i-1][j];
        if(j>0) v[i][j] += v[i][j-1];
        if(i>0 && j>0) v[i][j] -= v[i-1][j-1];
    }
    int maxrect = INT_MIN;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++)
        for(int k=i;k<n;k++) for(int l=j;l<n;l++){
            int subrect= v[k][l];
            if(i>0) subrect -= v[i-1][l];
            if(j>0) subrect -= v[k][j-1];
            if(i>0&&j>0) subrect += v[i-1][j-1];
            maxrect = max(maxrect , subrect);
        }

    printf("%d\n",maxrect);
}