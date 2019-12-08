#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin>>s){
        if(s=="0") break;
        string num = s.substr(0,s.length()-1);
        int n=stoi(num);
        vector<int> v(n);
        for(auto&i:v) scanf("%d",&i);
        // for(auto&i:v) printf("%d, ",i);
        // cout <<endl;
        bool isg=true;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int dif = v[i]-v[j];
                if(dif==0) continue;
                int wnt= v[j]-dif;
                if(wnt<0) continue;
                if(j+1>n) continue;
                if(find(v.begin()+j+1,v.end(),wnt)!=v.end())
                    isg=false;
                if(!isg) break;
            }
            if(!isg) break;
        }
        (isg)? printf("yes\n"): printf("no\n");
    }
}