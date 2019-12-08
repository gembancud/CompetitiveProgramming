#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios ::sync_with_stdio(0);
    int n ;
    cin >> n;
    while(n--){
        string s1,s2;
        cin >> s1 >> s2;
        bool issub=false;
        unordered_map<char,bool> mep;
        for(auto i= s1.begin();i!=s1.end();i++){
            mep[*i]=true;
        }
        for(auto i=s2.begin();i!=s2.end();i++){
            if(mep[*i]){
                issub=true;
                break;
            }
        }
        (issub) ?cout <<"YES"<<endl:cout <<"NO"<<endl;
    }
}