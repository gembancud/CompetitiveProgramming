#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int i =1;
    while(cin >>n){
        if(n==0) break;
        int tot=0;
        for(int j=0;j<n;j++){
            int x;cin>>x;
            if(x==0) tot--;
            else tot++;
        }
        printf("Case %d: %d\n",i,tot);
        i++;
    }
}