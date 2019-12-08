#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    int cc=1;
    while(t--){
        int n; cin >>n;
        int miles=0,juice=0;
        for(int i=0;i<n;i++){
            int x; cin >>x;
            miles += 10*(x/30 + bool(x%30)+bool(x%30==0));
            juice += 15*(x/60 + bool(x%60)+bool(x%60==0));
        }
        printf("Case %d: ",cc);
        if(miles>juice) printf("Juice %d\n",juice);
        else if(miles<juice) printf("Mile %d\n",miles);
        else printf ("Mile Juice %d\n",miles);
        cc++;
    }
}