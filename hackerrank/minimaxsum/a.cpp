#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int x;
    vector<long long int> v;
    long long int min=0,max=0;
    while (cin >> x){
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for (long long int i = 0; i < 4; i++)
    {
        min += v[i];
        max += v[v.size()-1-i];
    }
    
    cout << min <<" "<< max << "\n";
}