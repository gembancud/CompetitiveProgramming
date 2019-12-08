#include <bits/stdc++.h>
using namespace std;

vector<int> tree;
int main(){
    int t;
    cin >>t;
    while(t--){
        int x;
        cin >>x;
        int ih=1;
        for(int i=0;i<x;i++){
            if(i%2==0) ih*=2;
            else ih++;
        }
        cout<< ih<< endl;
    }
}