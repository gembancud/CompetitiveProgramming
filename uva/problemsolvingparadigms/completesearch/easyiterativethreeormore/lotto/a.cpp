#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; bool fst=false;
    while(cin >>n){
        if(n==0) break;
        if(fst) cout <<endl;
        fst =true;
        vector<int> v(n);
        for(auto&i:v) cin>>i;
        for(int i=0;i<n-5;i++){
            for(int j=i+1;j<n-4;j++){
                for(int k=j+1;k<n-3;k++){
                    for(int q=k+1;q<n-2;q++){
                        for(int w=q+1;w<n-1;w++){
                            for(int e=w+1;e<n;e++){
                                printf("%d %d %d %d %d %d\n",v[i],v[j],v[k],v[q],v[w],v[e]);
                            }
                        }
                    }
                }
            }
        }
        
    }
}