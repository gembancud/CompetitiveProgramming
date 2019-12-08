#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int i=1;
    while(cin >>s){
        if(s=="#") break;
        string r;
        if(s=="HELLO") r="ENGLISH";
        else if(s=="HOLA") r="SPANISH";
        else if(s=="HALLO") r="GERMAN";
        else if(s=="BONJOUR") r="FRENCH";
        else if(s=="CIAO") r="ITALIAN";
        else if(s=="ZDRAVSTVUJTE") r="RUSSIAN";
        else r="UNKNOWN";
        printf("Case %d: %s\n",i,r.c_str());
i++;
    }
}