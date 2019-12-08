#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
int x;

int main(){
    int a,b;
    while(cin>>a>>b){
        if(a==0 and b==0) break;
        v.resize(a,vector<int>(b));
        for(int i=0;i<a;i++) for(int j=0;j<b;j++){
            cin>>x;
            if(x==1) v[i][j] =0;
            else v[i][j]=1;
            if(i>0) v[i][j]+=v[i-1][j];
            if(j>0) v[i][j]+=v[i][j-1];
            if(i>0&&j>0) v[i][j]-=v[i-1][j-1];
        }

        int maxrec = 0;
        for(int i=0;i<a;i++) for(int j=0;j<b;j++)
            for(int k=i;k<a;k++) for(int l=j;l<b;l++){
                int subrec = v[k][l];
                if(i>0) subrec -=v[i-1][l];
                if(j>0) subrec -=v[k][j-1];
                if(i>0 && j>0) subrec +=v[i-1][j-1];
                int sz= (k-i+1)*(l-j+1);
                if(sz==subrec)
                maxrec = max(maxrec, subrec);
            }

        printf("%d\n",maxrec);
        v.clear();
    }
}