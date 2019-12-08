#include <bits/stdc++.h>
using namespace std;

void r(int&i){
    i++;
    if(i==100)i=0;
}
void l(int&i){
    i--;
    if(i==-1)i=99;
}

char conv(int i){
    switch(i){
        case 0: return '0'; break;
        case 1: return '1'; break;
        case 2: return '2'; break;
        case 3: return '3'; break;
        case 4: return '4'; break;
        case 5: return '5'; break;
        case 6: return '6'; break;
        case 7: return '7'; break;
        case 8: return '8'; break;
        case 9: return '9'; break;
        case 10: return 'A'; break;
        case 11: return 'B'; break;
        case 12: return 'C'; break;
        case 13: return 'D'; break;
        case 14: return 'E'; break;
        case 15: return 'F'; break;
    }
}
void u(int&i){
    i++;
    if(i==256) i=0;
}

void d(int&i){
    i--;
    if(i==-1) i=255;
}

int main(){
    int t;cin >>t;
    int i=1;
    while(t--){
        vector<int> v(100,0);
        int p=0;
        string s;cin >>s;
        for(int i=0;i<s.length();i++){
            switch(s[i]){
                case '>': r(p); break;
                case '<': l(p); break;
                case '+': u(v[p]); break;
                case '-': d(v[p]); break;
            }
        }
        printf("Case %d: ",i);
        for(int i=0;i<v.size();i++){
            char t = conv(v[i]/16);
            char o = conv(v[i]%16);
            printf("%c%c",t,o);
            if(i<v.size()-1) cout << " ";
        }
        cout <<endl;
        i++;
    }
}