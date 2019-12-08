#include <bits/stdc++.h>
using namespace std;

bool cmp(vector<long long> a,vector<long long> b){
    return (a[0]<b[0]);
}


int main(){
    int n;
    while(cin>>n){
        if(n==0) break;
        vector<long long> v(n);
        for(auto&i:v) cin>>i;
        vector<vector<long long>> ab;
        vector<vector<long long>> dc;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long sum=  v[i]+v[j];
                long long dif=  v[j]-v[i];
                vector<long long> tmpab;
                tmpab.push_back(sum);
                tmpab.push_back(v[i]);
                tmpab.push_back(v[j]);
                ab.push_back(tmpab);
                vector<long long> tmpdc;
                tmpdc.push_back(dif);
                tmpdc.push_back(v[i]);
                tmpdc.push_back(v[j]);
                dc.push_back(tmpdc);
            }
        }
        sort(ab.begin(),ab.end(),cmp);
        sort(dc.begin(),dc.end(),cmp);

        vector<long long> abo;
        vector<pair<long long,long long>> abp;
        for(auto&i:ab){
            abo.push_back(i[0]);
            abp.push_back(make_pair(i[1],i[2]));
        }
        vector<long long> dco;
        vector<pair<long long,long long>> dcp;
        for(auto&i:dc){
            dco.push_back(i[0]);
            dcp.push_back(make_pair(i[1],i[2]));
        }

        long long mx= INT_MIN;
        for(int i=0;i<abo.size();i++){
            auto it = lower_bound(dco.begin(),dco.end(),abo[i]);
            int idx =it - dco.begin();
            if(abo[i] == dco[idx]){
                if(
                    abp[i].first != dcp[idx].first &&
                    abp[i].first != dcp[idx].second &&
                    abp[i].second != dcp[idx].first &&
                    abp[i].second != dcp[idx].second
                )
                mx = max(mx,dcp[idx].second);
            }
        }
        if(mx==INT_MIN) printf("no solution\n");
        else cout << mx <<endl;
    }
}