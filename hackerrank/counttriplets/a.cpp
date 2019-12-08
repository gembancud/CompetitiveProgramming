#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n, r;
    cin >> n >> r;
    long long tc = 0;
    map<long,long> m2,m3;
    for(int i = 0 ; i<n;i++){
        long in;
        cin >> in;

        if(m3.count(in))
            tc+=m3[in];
        if(m2.count(in))
            m3[in*r]+=m2[in];
            m2[in*r]++;
    }
    cout << tc << endl;
    
}