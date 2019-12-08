#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool f =true;
    while(cin>>n){
        if(!f){
            cout<<endl; 
        }
        f=false;
        map<string, int> ppl;
        vector<string> v;
        for(int i=0;i<n;i++){
            string s; cin >>s;
            ppl[s];
            v.push_back(s);
        }
        for(int i=0;i<n;i++){
            string a;cin >>a;
            int b,c; cin >>b>>c;
            if(c==0) continue;
            ppl[a] -= (int(b/c)*c);
            for(int j=0;j<c;j++){

                string d;cin>>d;
                ppl[d]+=b/c;
            }
        }

        for(int i=0;i<n;i++){
            printf("%s %d\n",v[i].c_str(),ppl[v[i]]);
        }
    }
}