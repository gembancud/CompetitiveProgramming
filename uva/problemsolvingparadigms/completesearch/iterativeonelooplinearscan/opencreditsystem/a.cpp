#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >>t;
    while(t--){
        int n;cin>>n;
        vector<int> s(n);
        for(auto&i:s) cin>>i;
        int mx=INT_MIN;
        int mxs=s[0];
        for(int i=1;i<n;i++){
            mx= max(mx,mxs-s[i]);
            mxs= max(mxs,s[i]);
        }
        cout <<mx<<endl;

    }
}