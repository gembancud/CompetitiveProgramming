#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >>t;
    int i=1;
    while(t--){
        int n;cin >>n;
        int curr;cin >>curr;
        int hi=0,lo=0;
        for(int i=1;i<n;i++){
            int x; cin >>x;
            if(x>curr) hi++;
            if(x<curr) lo++;
            curr = x;
        }
        printf("Case %d: %d %d\n",i,hi,lo);
    i++;
    }
}