#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<char> v(s.begin(), s.end());
    int ins = 0;
    int count = 1;
    auto prev = v.begin();
    for (auto i = v.begin() + 1; i != v.end(); i++)
    {
        // cout << *i << " " <<*prev  << count<<endl;
        if (*i == *prev)
            count++;
        else
        {
            if (count % 2 == 0)
                ins++;
            count = 1;
        }
        prev = i;
    }
    if(count%2 ==0) ins++;
    cout << ins << endl;
}