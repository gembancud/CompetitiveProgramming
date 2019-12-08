#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> st(n);
        vector<int> fn(n);
        for(auto&i:st)cin >>i;
        for(auto&i:fn)cin >>i;
        int tot=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=0;k<n;k++){
                    if(fn[k]==st[i]) break;
                    if(st[j]==fn[k])tot++;
                }
            }
        }
        cout <<tot<<endl;
    }
}