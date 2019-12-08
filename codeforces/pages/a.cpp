#include <bits/stdc++.h>
using namespace std;

int main (){
    int n,p,k;
    cin >>n>>p>>k;
    auto fst = p-k;
    auto lst = p+k;
    if(fst>1) cout << "<< ";
    for(int i = fst; i<=lst;i++){
        if(i<1 || i >n) continue;
        if(i==p){
            cout << "("<<p<<") ";
        }
        else cout << i <<" ";
    }
    if(lst<n) cout << ">>";
    
}