#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int g;
        cin>>g;
        int xtra= g%5;
        if(xtra>2 && g>=38) g+= (5-xtra);
        cout << g << "\n";
    }
}