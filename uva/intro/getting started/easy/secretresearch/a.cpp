#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >>t;
    while(t--){
        string s;cin >>s;
        int ln = s.length();
        if(s=="1"||s=="4"||s=="78") cout<<"+"<<endl;
        else if(s[ln-1]=='5'&&s[ln-2]=='3') cout <<"-"<<endl;
        else if(s[0]=='9' && s[ln-1]=='4') cout <<"*"<<endl;
        else if(s[0]=='1' &&s[1]=='9' &&s[2]=='0' ) cout<<"?" <<endl;
        else cout << "+"<<endl;
    }
}