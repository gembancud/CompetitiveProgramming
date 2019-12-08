#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >>n){
        int eco[n][n];
        for(int i=0;i<n;i++){
            for(int j =0; j<n;j++){
                cin >> eco[i][j];       
            }
        }
        int tot =0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j) continue;
                for(int k=1;k<=n;k++){
                    if(i==k || j==k) continue;
                    if(i<j && j>k) continue;
                    if(i>j && j<k) continue;
                    if(eco[i-1][j-1]&&eco[j-1][k-1]&&eco[k-1][i-1]) {
                        tot++;
                        printf("%d %d %d\n",i,j,k);
                    } 
                }
            }
        }
        printf("total:%d\n\n",tot);
            
    }
}