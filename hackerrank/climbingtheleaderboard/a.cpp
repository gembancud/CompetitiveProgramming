#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> scores;
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        if(scores.size()>0){
            if(scores.back()!=q) scores.push_back(q);
        }
        else scores.push_back(q);

    }
    sort(scores.begin(),scores.end());
    // for(auto&i: scores) printf("%d\n",i);
    int m;
    cin >> m;
    vector<int> alice;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        alice.push_back(x);
    }
    int place = scores.size()+1;
    auto p = alice.begin();
    auto curr = scores.begin();
    while(p<alice.end()){
        if(curr==scores.end()){
            cout <<1 <<endl;
            advance(p,1);
        }
        else if(*p<*curr){
            cout << place <<endl;
            advance(p,1);
        }
        else if(*p>=*curr){
            advance(curr,1);
            --place;
        }
    }

}