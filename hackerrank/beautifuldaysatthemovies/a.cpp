#include <bits/stdc++.h>
using namespace std;

int main (){
    int i,j,k;
    cin >> i>> j>> k;
    int tc=0;
    for (; i <= j; i++)
    {
        auto str1= to_string(i);
        auto str2 = str1;
        reverse(str2.begin(),str2.end());
        auto int1=stoi(str1);
        auto int2=stoi(str2);
        if(abs(int1-int2)%k ==0) tc++;
    }
    cout <<tc<<endl;
}