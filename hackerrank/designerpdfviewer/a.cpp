#include <bits/stdc++.h>
using namespace std;

vector<char> alpha{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
vector<int> alphac(26,0);
int main()
{
    for (int i = 0; i < 26; i++)
    {
        cin >> alphac[i];
    }
    string s;
    cin >> s;
    vector<char> v(s.begin(),s.end());
    int maxheight =0;
    for(auto i= v.begin();i!= v.end();i++){
        auto it =find(alpha.begin(),alpha.end(),*i);
        auto idx = distance(alpha.begin(),it);
        maxheight= max(maxheight,alphac[idx]);
        // printf("max:%d taken from letter %c w/ %d\n",maxheight,*i,alphac[idx]);
    }
    cout << maxheight*v.size() <<endl;
}