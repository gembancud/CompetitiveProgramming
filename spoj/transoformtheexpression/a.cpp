#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >>t;
    cin.ignore();
    while(t--){
        string expr; 
        getline(cin,expr);
        printf("parsing %s\n",expr.c_str());
        stack<char> st;
        for(auto i=expr.begin();i!=expr.end();i++){
            if(*i=='*'||*i=='/'||*i=='+'||*i=='-'||*i=='^' ) st.push(*i);
            else if(*i==')'){
                cout << st.top(); st.pop();
            }
            else if(*i=='(') continue;
            else cout << *i;
        }
        cout <<"\n";
    }
}