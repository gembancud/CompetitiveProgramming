#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    n--;
    int f;
    cin >>f;
    int max=f;
    int min=f;
    int mxb=0;
    int mnb=0;
    while(n--){
        int x;
        cin >>x;
        if (x>max){
            max = x;
            mxb++;
        }
        if(x<min){
            min=x;
            mnb++;
        }
    }
    cout << mxb <<" " << mnb;
}