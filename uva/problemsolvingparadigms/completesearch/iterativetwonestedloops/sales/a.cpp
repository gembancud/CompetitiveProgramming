#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >>t;
    while(t--){
        int n;cin >>n;
        vector<int> v(n);
        for(auto&i:v)
        {
        cin >>i;
        }
        int ts=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++)
                if(v[i]>=v[j])ts++;
        }
        cout<<ts<<endl;
    
    }
}