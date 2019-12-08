#include <bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[3];
    int b[3];
    int sa=0;
    int sb=0;
    cin >> a[0] >>a[1] >> a[2];
    cin >> b[0] >>b[1] >> b[2];
    for(int i=0; i<3;i++){
        if(a[i]>b[i]) sa++;
        else if(a[i]<b[i]) sb++;
    }
    cout << sa <<" "<< sb;

}