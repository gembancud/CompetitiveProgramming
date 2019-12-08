#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int> v;
    while(cin>>n){
        v.push_back(n);
    }
    for(auto&i:v){
        if(i==42) break;
        else cout << i <<endl;
    }
    // return 0;
}