#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int n,m;
    cin >> m>>n;
    vector<string> mag;
    vector<string> note;
    for(int i=0;i<m;i++){
        string s;
        cin >> s;
        mag.push_back(s);
    }

    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        note.push_back(s);
    }

    map<string,int> map;
    for(auto i=mag.begin();i!=mag.end();i++){
        map[*i]++;
    }
    // for(auto&i:map){
    //     cout << i.first <<" ";
    // }
    for(auto i= note.begin();i!=note.end();i++){
        map[*i]--;
        if(map[*i]<0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" <<endl;
}