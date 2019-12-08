#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >>t;
    while(t--){
        long n;cin >>n;
        int out = ((((n*567)/9 + 7492)*235)/47)-498;
        out /=10;
        int res = abs(out%10);
        cout <<  res<<endl;
    }
}