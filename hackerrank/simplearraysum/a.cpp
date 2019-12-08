#include <bits/stdc++.h>
using namespace std;


int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >>n;
    long long sum=0;
    while (n--){
        long long x;
        cin >> x;
        sum+=x; 
    }
    cout << sum <<"\n";
}