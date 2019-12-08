#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;int cc=1;
    while(cin>>n){
        if (n==0) break;
        printf("Case %d:\n",cc);cc++;
        vector<int> v(n);
        for(auto&i: v) cin>>i;
        sort(v.begin(),v.end());
        int m;cin>>m;
        while(m--){
            int q;cin >>q;
            int clssum=v[0]+v[1];
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    int sum = v[i]+ v[j];
                    if(abs(q-sum) < abs(clssum-q)) clssum=sum;
                }
            }
            printf("Closest sum to %d is %d.\n", q , clssum);
        }
    }
}