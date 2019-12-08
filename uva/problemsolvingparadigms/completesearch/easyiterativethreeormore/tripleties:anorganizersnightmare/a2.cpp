#include <bits/stdc++.h>
using namespace std;

// !UNSOLVED

int main(){
    int n;
    while(cin >>n){
        int m[n][n];
        for(auto &i:m) for(auto&j:i) cin>>j;
        for(auto&i : m){
            for(auto&j:i){
                printf("%d ",j);
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                        if(i==j || j==k || i==k) continue;
                        if(m[i][j]==m[j][k] && m[j][k] ==m[k][i])
                        {
                            printf("these where equal m[%d][%d],m[%d][%d],m[%d][%d]\n",i,j,j,k,k,i);
                            printf("%d %d %d\n",i+1,j+1,k+1);
                        }
                }
            }
        }
        cout<<endl;
    }
}