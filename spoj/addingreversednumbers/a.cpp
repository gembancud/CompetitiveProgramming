#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string a,b;cin>>a>>b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        auto ai = stoi(a);
        auto bi = stoi(b);
        auto ci= ai+bi;
        auto c = to_string(ci);
        reverse(c.begin(),c.end());
        ci = stoi(c);
        cout << ci<<endl;
    }
}