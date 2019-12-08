#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int c = 0;

    while (getline(cin,s))
    {
        vector<char> v(s.begin(), s.end());
        for (int i = 0; i < v.size(); i++)
        {
            if(v[i]=='\"'){
                if(c%2==0) cout<<"``";
                else cout << "''";
                c++;
            }
            else cout<<v[i];
        }
        cout << endl;
    }
}