#include<bits/stdc++.h>
using namespace std;

int concat(int a){
    int sum=0;
    while(a/10!=0){
        sum += a%10;
        a/=10;
    }
    sum += a;
    return sum;
}

int main(){
    int n;
    while(cin >>n){
        if(n==0) break;
        while(n>=10){
            n = concat(n);
        }
        cout << n <<endl;
    }
}