#include <bits/stdc++.h>
using namespace std;

long numbits(long n){
    long count =0;
    while(n){
        count += n&1;
        n >>=1;
    }
    return count;
}

void rec(long curr, long mx,long h,int n){
    if(curr== mx) return;
    long val= curr^0;
    if(numbits(val)== h){
        switch(n){
            case 1: cout<<bitset<1>(val);break; 
            case 2: cout<<bitset<2>(val);break; 
            case 3: cout<<bitset<3>(val);break; 
            case 4: cout<<bitset<4>(val);break; 
            case 5: cout<<bitset<5>(val);break; 
            case 6: cout<<bitset<6>(val);break; 
            case 7: cout<<bitset<7>(val);break; 
            case 8: cout<<bitset<8>(val);break; 
            case 9: cout<<bitset<9>(val);break; 
            case 10: cout<<bitset<10>(val);break; 
            case 11: cout<<bitset<11>(val);break; 
            case 12: cout<<bitset<12>(val);break; 
            case 13: cout<<bitset<13>(val);break; 
            case 14: cout<<bitset<14>(val);break; 
            case 15: cout<<bitset<15>(val);break; 
            case 16: cout<<bitset<16>(val);break; 
        }
        printf("\n");
    }
    return rec(curr+1,mx,h,n);
}

int main(){
    int t;cin>>t;
    bool f=false;
    while(t--){
        if(f)
        cout<<'\n';
        f=true;
        long n,h;cin>>n>>h;
        long mx = (long)pow(2,n);
        rec(0,mx,h,n);
    }
}