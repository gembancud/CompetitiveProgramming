#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >>t;
    while(t--){
        int n;
        cin >>n;
        int tot=0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >>x;
            tot += x;
            v[i] = x;
        }
        int avg = tot/n;
        int mn=v[0];
        int mx=v[0];
        for (int i = 0; i < n; i++)
        {
            mx= max(mx, v[i]);
            mn= min(mn, v[i]);
        }
        // printf("avg: %d min: %d max: %d \n",avg,mn,mx);
        int fin = 2*(avg -mn) + 2*(mx-avg);
        cout <<fin <<endl;
        

    }
}