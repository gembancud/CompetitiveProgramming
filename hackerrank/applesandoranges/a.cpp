#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,t,a,b,m,n;
    cin >> s>>t>>a>>b>>m>>n;
    int ta=0;
    int to=0;
    while(m--){
        int x;
        cin >> x;
        if(a+x>=s && a+x<=t)ta++;        
    }
    while(n--){
        int x;
        cin >>x;
        if(b+x>=s && b+x <=t) to++;
    }
    cout <<ta <<endl<<to;
}