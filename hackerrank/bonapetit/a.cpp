#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,b;
    cin >> n >> k;
    int actual=0;
    int charge=0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >>x;
        if(i!=k){
            actual+=x;
        }
    }
    cin >> b;
    if(actual/2==b){
        cout << "Bon Appetit";
    }
    else cout << b-(actual/2);
    
}