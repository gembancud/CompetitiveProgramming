#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int budget=0;
        int f;cin >>f;
        for(int i=0;i<f;i++){
            int sz,na,ef;cin>>sz>>na>>ef;
            double a= sz*ef;
            budget+= a;
        }
        cout <<budget <<endl;
    }
}