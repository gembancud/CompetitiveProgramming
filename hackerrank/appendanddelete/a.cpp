#include <bits/stdc++.h>
using namespace std;

string a,b;
int k;

// bool rec(int i,vector<char> av, vector<char> bv){
//     if(i>k) return false;
//     string as(av.begin(),av.end());
//     string bs(bv.begin(),bv.end());
//     if(as==bs && i==k){
//         // printf("%s %s\n",string(av.begin(),av.end()).c_str(),string(bv.begin(),bv.end()).c_str());
//     return true;

//     } 
//     auto ta=av;
//     ta.push_back('a');
//     auto tb=bv;
//     tb.push_back('a');
//     if(rec(i+1,av,tb)) return true; // add to b
//     if(rec(i+1,ta,bv)) return true; // add to a
//     auto ta2= av;
//     if(!ta2.empty())
//     ta2.pop_back();
//     auto tb2= bv;
//     if(!tb2.empty())
//     tb2.pop_back();
//     if(rec(i+1,av,tb2)) return true; // remove from b
//     if(rec(i+1,ta2,bv)) return true; // remove from a
//     return false;
// }

int main(){
    cin>>a>>b;
    cin>>k;
    // (rec(0,vector<char>(a.begin(),a.end()),vector<char>(b.begin(),b.end()))) ? printf("Yes\n"): printf("No\n");
    
}