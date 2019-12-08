#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >>t;
    long tot=0;
    while(t--){
        string s; cin >>s;
        if(s=="donate"){
            int x; cin >>x;
            tot+=x;
        }
        else if (s=="report"){
            cout <<tot<<endl;
        }
    }
}