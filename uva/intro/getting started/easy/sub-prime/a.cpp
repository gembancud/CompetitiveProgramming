#include <bits/stdc++.h>
using namespace std;

int main(){
    int b,n;
    while( cin >>b>>n){
        if (b==0 && n ==0 ) break;
        vector<int> res(b+1,0);
        for(int i=1;i<b+1;i++) cin >> res[i];
        for(int i=0;i<n;i++){
            int d,c,v; cin >>d>>c>>v;
            res[d]-=v;
            res[c]+=v;
        }
        bool g=true;
        for(int i=1;i<res.size();i++){
            if(res[i]<0) g=false;
        }
        (g)? cout<< "S\n": cout <<"N\n";
    }

}