#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;cin>>a>>b;
    map<char,int> am;
    map<char,int> bm;
    for(auto &i:a){
        am[i]++;
    }
    for(auto&i:b){
        bm[i]++;
    }
    int tc=0;
    for(auto i:am){
        if( bm.count(i.first)==0) tc+= i.second;
        else if (bm[i.first]>i.second){
            tc += bm[i.first]-i.second;
        }
    }
    for(auto i:bm){
        if( am.count(i.first)==0) tc+= i.second;
        else if (am[i.first]>i.second){
            tc += am[i.first]-i.second;
        }
    }
    cout << tc <<endl;
}