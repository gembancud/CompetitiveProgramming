#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; int c=1;
    while(cin >>s){
        cout << "Case "<<c<<":\n"; 
        int q;cin>>q;
        for(int qq=0;qq<q;qq++){
            int i,j;cin >>i>>j;
            int l = min(i,j);
            int r = max(i,j);
            char init = s[l];
            bool same=true;
            for(;l<=r;l++){
                if(s[l]!=init) same=false;
            }
            (same) ? cout << "Yes":cout <<"No";
            cout <<endl;
        }
        c++;
    }
}