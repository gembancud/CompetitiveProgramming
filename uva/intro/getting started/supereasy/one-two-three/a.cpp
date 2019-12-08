#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        string s; cin >>s;
        int x;
        int wrong1=0;
        int wrong2=0;
        if(s.length()==5) x=3;
        else{
            if(s[0] !='o')
            wrong1 ++;
            if(s[1]!='n'){
            wrong1 ++;
            }
            if(s[2]!='e')
            wrong1++;

            if(s[0] !='t')
            wrong2 ++;
            if(s[1]!='w'){
            wrong2 ++;
            }
            if(s[2]!='o')
            wrong2++;

            if(wrong1<=1) x=1;
            else if(wrong2 <=1) x=2;
        }
        cout <<x<<endl;
    }
}