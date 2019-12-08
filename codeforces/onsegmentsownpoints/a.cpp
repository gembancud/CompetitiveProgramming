#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    int l,r,q,w;
    int tot=0;
    cin >>l >>r;
    vector<int> alex(100,0);
    for(int i=l;i<r;i++){
        alex[i]=1;
    }
    for (int i = 0; i < n-1; i++)
    {
        cin >> q >> w; 
        for(int j=q;j<w; j++){
            alex[j]=0;
        }
    }
    for(int i=l;i<r;i++){
        // cout << alex[i] << " ";
        if(alex[i]==1) ++tot;
    }
    cout << tot <<endl;

}