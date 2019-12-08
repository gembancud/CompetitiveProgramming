#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int c =1;
    vector<int> v(3);
    while (t--){
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(),v.end());
        cout << "Case "<<c<<": "<< v[1];
        c++;
        cout <<endl;
    }
}