#include<bits/stdc++.h>
using namespace std;


int main (){
    int n,m,c;
    int seq=1;
    while(cin >>n>>m>>c){
        if(n==0&&m==0&&c==0) break;
        vector<int> devices(n+1);
        vector<int> state(n+1);
        for(int i=1;i<=n;i++){
            int q;cin>>q;
            devices[i]=q;
        }
        
        int curr=0;
        int mx=INT_MIN;
        bool blow=false;
        for(int i =0;i<m;i++){
            int q;cin>>q;
            state[q]++;
            if(state[q]%2==1) curr+= devices[q];
            else curr-=devices[q];
            mx = max(mx,curr);
            if(curr>c) blow = true;
        }
        cout << "Sequence " << seq<<endl;
        (blow)? printf("Fuse was blown.\n"): printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n",mx); 
        cout <<endl;
        seq++;
    }
}