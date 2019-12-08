#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<map<char, char>> vm;
    while (getline(cin, s))
    {
        if (s[0] == '#')
            break;
        else if (s[0] == 'e')
        {
            //evaluate;
            int bidx=0;
            int bval=INT_MIN;            
            for (int i = 0; i < vm.size(); i++)
            {
                int tmpval=0;
                for (int j = 0; j < vm.size(); j++)
                {
                    if(i==j) continue;
                    for(auto&k:vm[j]){
                        if(vm[i][k.first]==k.second) tmpval++;
                    }
                }
                if(tmpval >bval){
                    bval=tmpval;
                    bidx=i;
                }
            }
            cout << bidx+1 <<endl;

            vm.clear();
        }
        else
        {
            //  r/P,o/G,y/S,g/A,b/N
            map<char, char> m;
            m[s[0]] = s[2];
            m[s[4]] = s[6];
            m[s[8]] = s[10];
            m[s[12]] = s[14];
            m[s[16]] = s[18];
            vm.push_back(m);
        }
    }
}