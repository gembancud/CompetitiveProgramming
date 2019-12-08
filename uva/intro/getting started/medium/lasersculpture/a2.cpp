#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,c;
    while(cin >>a>>c){
        if(a==0 && c==0) break;
        vector<int> v(c);
        for(auto&i:v) cin >> i;
        int qq=a-v[0];
        int cur=v[0];
        for(auto&i:v){
            if(cur>i)qq +=cur-i;
            cur =i;
        }
        cout << qq <<endl;
    }
}