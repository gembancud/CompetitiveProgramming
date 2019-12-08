#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int s;

vector<int> getnice(){
    int a=0,b=1;
    int mxa=0,mxb=1;
    int mxnc=v[0];
    int curmx=v[0];
    // printf("curmx is %d\n",curmx);
    for(int i=1;i<v.size();i++){
        if(v[i]>curmx+v[i]){
            a=i;
            b=i+1;
            curmx=v[i];
            // printf("bilat\n");
        }
        else{
            // printf("bilat2 %d<%d\n",v[i],curmx+v[i]);
            b++;
            curmx+=v[i];
        }
        if(curmx>mxnc){
            mxnc = curmx;
            mxa=a;
            mxb=b;
        }
        else if(curmx==mxnc){
            if(mxb-mxa<b-a) {
                mxnc=curmx;
                mxa=a;
                mxb=b;
            }
        }
        // printf("new mx is %d at %d-%d\n",mxnc,a,b);
    }
    vector<int> f(3);
    f[0]=mxnc;
    f[1]=mxa;
    f[2]=mxb;
    return f;
}

int main(){
    int b;cin>>b;
    int rt=1;
    for(int i=0;i<b;i++){
        cin>>s;
        v.resize(s-1);
        for(int j=0;j<s-1;j++){
            cin>>v[j];
        }
        // printf("oten\n");
        vector<int> res =getnice();
        if(res[0]<1) printf("Route %d has no nice parts\n",rt);
        else {
            printf("The nicest part of route %d is between stops %d and %d\n",rt,res[1]+1,res[2]+1);
        }
        v.clear();
        rt++;
    }
}