#include<bits/stdc++.h>
using namespace std;

int n;
vector<string> v;
vector<string> led(10);
vector<bool> dead(10,false);
void preset(){
    led[0] ="YYYYYYN";
    led[1] ="NYYNNNN";
    led[2] ="YYNYYNY";
    led[3] ="YYYYNNY";
    led[4] ="NYYNNYY";
    led[5] ="YNYYNYY";
    led[6] ="YNYYYYY";
    led[7] ="YYYNNNN";
    led[8] ="YYYYYYY";
    led[9] ="YYYYNYY";
}



bool isvalid(string a,string b){
    bool g=true;
    for(int i=0;i<a.length();i++){
        // if(b[i]=='N' && a[i]=='Y') return false;
        if(a[i]=='Y' &&dead[i]) return false;
        if(b[i]=='N' && a[i]=='Y'){
        g= false;
        }
        if(a[i]=='N'&&b[i]=='Y') dead[i]=true;
    }
    return g;
}

bool rec(int i,int cd){
    // printf("debug:n=%d ,v[%d]=%s compared to %s\n",n,i,v[i].c_str(),led[cd].c_str());
    if(i==n) return true;
    if(cd<0) return false;
    if(isvalid(v[i],led[cd])){
        // printf("%d: %s %s=%d\n",i,v[i].c_str(),led[cd].c_str(),cd);
        if(rec(i+1,cd-1)) return true;
    }
    return false;
}

int main(){
    preset();
    while(cin>>n){
        if(n==0) break;
        v.resize(n);
        for(auto&i:v) cin>>i;
        bool g=false;
        for(int i=0;i<10;i++){
            g = rec(0,i);
            // if(g) printf("iyot\n");
            if(g) break;
            dead.clear();
            dead.resize(10,false);
        }
        (g)? printf("MATCH\n"): printf("MISMATCH\n");
        v.clear();
    }
}