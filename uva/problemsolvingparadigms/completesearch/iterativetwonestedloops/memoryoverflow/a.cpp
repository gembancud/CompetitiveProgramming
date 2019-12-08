#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int cc = 1;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        deque<char> mem;
        string s;
        cin >> s;
        int ct=0;
        vector<char> col(s.begin(), s.end());
        for(int i=0;i<n;i++){
            if(find(mem.begin(),mem.end(),col[i])!=mem.end()) ct++;
            mem.push_back(col[i]);
            if(mem.size()>k) mem.pop_front();
        }
        printf("Case %d: %d\n",cc,ct);
        cc++;
    }
}