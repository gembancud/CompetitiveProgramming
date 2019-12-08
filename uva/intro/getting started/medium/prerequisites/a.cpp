#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,m;
    while(cin >>k){
        if(k==0) break;
        cin >>m;
        vector<string> course(k);
        for(int i=0;i<k;i++){
            cin>>course[i];
        }
        bool g=true;
        for(int i=0;i<m;i++){
            int c,r;cin>>c>>r;
            int init=0;
            for(int j=0;j<c;j++){
                string x;cin>>x;
                auto it =find(course.begin(),course.end(), x);
                if( it!= course.end()) init++;
            }
            if (init<r) g=false; 
        }
        (g) ? cout <<"yes\n" : cout << "no\n";
    }

}