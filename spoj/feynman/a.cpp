#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        if(n==0) break;
        int i=1;int f=1;
        while(i<n){
            f+=pow(n-i+1,2);
            i++;
        }
        cout << f <<endl;
    }
}