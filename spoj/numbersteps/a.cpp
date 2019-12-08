#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>> t;
    while(t--){
        int x,y;cin >>x>>y;
        if(y!=x && y+2!=x) {cout <<"No Number\n"; continue;}
        int i=0,a=0,b=0;
        while(a<x || b <y){
            // printf("i:%d is at(%d,%d)\n",i,a,b);
            switch(i%4){
                case 0: a++;b++; break;
                case 1: a++;b--; break;
                case 2: a++;b++; break;
                case 3: a--;b++; break;
            }
            i++;
        }
        cout <<i <<endl;
    }
}