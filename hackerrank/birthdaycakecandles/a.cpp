#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    long long int max=0;
    long long int mc=0;
    while(n--){
            long long int x; 
            cin >> x;
            if(max<x) {
                max=x;
                mc=1;
            }
            else if(max==x)mc++;
    }
    cout << mc <<endl;
}