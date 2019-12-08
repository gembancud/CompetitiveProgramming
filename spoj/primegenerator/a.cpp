#include <iostream>
#include <math.h>
using namespace std;
bool isprime(int n){
    for(long i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >>t;
    while(t--){
        long m,n;cin >> m>>n;
        for(;m<=n;m++){
            if(m==1) continue;
            if(isprime(m)) cout << m<<endl;
        }
        cout << "\n";
    }
}