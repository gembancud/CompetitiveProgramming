#include <bits/stdc++.h>
using namespace std;

int movr[]={-1,0,1,0};
int movc[]={0,1,0,-1};
//! NOT DONE

int main(){
    int t;cin>>t;
    while(t--){
        int r,c;cin>>r>>c;
        vector<vector<char>> g(r);
        for(int i=0;i<r;i++){
            string s;cin>>s;
            g[i]=vector<char>(s.begin(),s.end());
        }

        //find joe
        pair<int,int> joe;
        vector<pair<int,int>> fires;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
                if(g[i][j]=='J'){
                    joe.first = i;
                    joe.second = j;
                }
                if(g[i][j]=='F'){
                    fires.push_back(make_pair(i,j));
                }
        }
        


    }
}