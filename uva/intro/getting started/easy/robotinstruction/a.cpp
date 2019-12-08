#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >>n;
        cin.ignore();
        vector<string> inst(n);
        for(int i =0;i <n;i++){
            getline(cin,inst[i]);
        }
        // for(auto&i:inst){
        //     cout<<i<<endl;
        // }
        int x=0;
        for(int i=0; i<n;i++){
            string ti = inst[i];
            // printf("checking inst %d: %s\n",i,ti.c_str());
            while(1){
                if(ti=="LEFT"||ti=="RIGHT") break;
                string z(ti.begin()+8,ti.end());
                // cout <<z<<endl;
                ti = inst[stoi(z)-1];
            }
            if(ti== "LEFT") x--;
            else x++;
        }
        cout << x <<endl;
    }
}