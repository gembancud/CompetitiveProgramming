#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    int i=1;
    while(t--){
        int s;
        int mx=0;
        cin >> s;
        while(s--){
            int x;
            cin >>x;
            mx= max(mx,x);
        }
        cout<< "Case "<<i<< ": "<< mx<<endl;
        i++;
    }
}