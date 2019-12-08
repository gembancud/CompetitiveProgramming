#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    bool once=false;
    int mx=INT_MIN;
    int mn=INT_MAX;
    for(auto&i:m){
        mn= min(mn,i.second);
        mx = max(mx,i.second);
    }
    int mnc=0,mxc=0;
    for(auto&i:m){
        if(i.second==mn) mnc++;
        if(i.second==mx) mxc++;
    }
    if(mn==mx) once =true;
    else if(mn==1&&mnc==1&&mx-mn==1) once =true;
    else if(mxc==1&&mx-mn==1) once=true;

    (once) ? cout << "YES" : cout << "NO";
}
