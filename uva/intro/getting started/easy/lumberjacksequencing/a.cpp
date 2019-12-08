#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >>n;
    cin.ignore(0);
    printf("Lumberjacks:\n");
    for (int i = 0; i < n; i++)
    {
        string s;
        vector<int> ar(10);
        for (int i = 0; i < 10; i++)
        {
            cin >>ar[i];
        }
        bool issorted=false;
        if(is_sorted(ar.begin(),ar.end())) issorted=true;
        reverse(ar.begin(),ar.end());
        if(is_sorted(ar.begin(),ar.end())) issorted=true;
        (issorted) ? printf("Ordered\n"): printf("Unordered\n");
    }
    
}