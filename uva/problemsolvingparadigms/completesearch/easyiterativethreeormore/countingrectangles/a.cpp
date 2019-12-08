#include <bits/stdc++.h>
using namespace std;
//!NOT ANSWERED
int main(){
    int n,m;
    while(cin>>n){
        if(n==0) break;
        cin>>m;
        string in[n];
        for(auto&i:in) cin>>i;
        int bx[n][m];
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) bx[i][j]=int(in[i][j])-'0';

        for(auto&i:bx){
            for(auto&j:i) printf("%d ",j);
            cout<<endl;
        }
        int tot=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(bx[i][j]==0) continue;
                int rn=1;
                while(j+rn<n){
                    if(bx[i][j+rn]==0) break;
                    rn++;
                }
                int cn=1;
                while(i+cn<m){
                    if(bx[i+cn][j]==0) break;                    
                    cn++;
                }

                int tmp = cn*rn;
                printf("r:%d c:%d i added %d\n",rn,cn,tmp);
                tot+=tmp;
            }
        }
        cout <<tot<<endl;

    }
}