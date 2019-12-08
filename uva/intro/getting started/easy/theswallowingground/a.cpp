#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool closable = true;
        int x;
        cin >> x;
        int init;
        int a,b; cin >>a >>b;
        init = a-b;
        for(int i=1;i<x;i++){
        int a,b; cin >>a >>b;
            if(init!= a-b){
                closable= false;
            }
        }
        (closable) ? cout << "yes\n" : cout << "no\n";
        if(t) cout <<endl;
    }
}