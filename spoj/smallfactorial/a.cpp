#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >>t;
    while(t--){
        long long n;cin>>n;
        long long x=1;
        long long i=1;
        for (; i <=n; i++)
        {
            x*=i;
            cout <<x<<endl;
        }
        cout <<x<<endl;
    }
}