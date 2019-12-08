#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int init =5;
    int trec=0;
    int tl=0;
    int cum=0;
    for (int i = 0; i < n; i++)
    {
        int res = init/2;
        tl +=res;
        // printf("liked:%d ... ppl: %d\n",tl,res);
        init = res*3;
        
    }
    cout << tl <<endl;
    
}