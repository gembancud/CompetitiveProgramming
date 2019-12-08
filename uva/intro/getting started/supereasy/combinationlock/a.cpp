#include <bits/stdc++.h>
using namespace std;

void rotcw(int&pos){
    pos--;
    if(pos<0) pos=39;
}

void rotccw(int&pos){
    pos++;
    if(pos==40) pos=0;
}
int main(){
    int a,b,c,d;
    while(cin >> a>>b>>c>>d){
        if(a==0&&b==0&&c==0&&d==0) break;
        int tot = 720+360;
        for(;a!=abs(b);rotcw(a))
            tot +=9;
        for(;b!=abs(c);rotccw(b))
            tot+=9;
        for(;c!=abs(d);rotcw(c))
            tot+=9;
        cout << tot<<endl;    
    }
}