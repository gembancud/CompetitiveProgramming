#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >>t;
    while(t--){
        int n;cin >>n;
        map<string,pair<int,int>> m;
        for(int i=0;i<n;i++){
            string a;int b,c; cin >>a>>b>>c;
            m[a] = make_pair(b,c);
        }
        int q;cin>>q;
        for(int i=0;i<q;i++){
            int cc=0;
            string res;
            int qq;cin>>qq;
            for(auto&i:m){
                // printf("%s %d:%d\n",i.first.c_str(),i.second.first,i.second.second);
                if(i.second.first<=qq && i.second.second >=qq){
                    res= i.first;
                    cc++;
                }
            }
            if(cc!=1) res= "UNDETERMINED";
            cout << res<<endl; 
        }
        if(t)cout <<endl;
    }
}