#include <bits/stdc++.h>
using namespace std;

vector<int> v;

long long getprod(vector<long long > tv){
    // printf("checking... \n");
    // for(auto&i:tv) printf("%d ",i);
    // printf("\n");
    long long  prod=1;
    for(auto&i:tv) prod*= i;
    return prod;
}

long long  modkad(){
    long long  mx= v[0];
    for(long long  i=0;i<v.size();i++){
        for(long long  j=i+1;j<v.size()+1;j++){
            mx = max(mx,getprod(vector<long long >(v.begin()+i,v.begin()+j)));
        }
    }
    return mx;

}


int main(){
    int n;
    while(cin>>n){
        if(n==-999999){
        printf("%lld\n",modkad());
        v.clear();
        }
        else v.push_back(n);
    }
}