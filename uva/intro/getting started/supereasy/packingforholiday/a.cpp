#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >>t;
    int i=1;
    while(t--){
        int l,w,h;cin >> l>>w>>h;
        bool g;
        if(l>20|| w>20 || h>20) g =false;
        else g = true;
        (g) ? printf("Case %d: good\n",i): printf("Case %d: bad\n",i);
        i++;
    }
}