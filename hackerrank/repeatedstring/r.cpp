#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    string s;
    long n;
    cin >> s >>n;
    // if(s == "a") cout << n <<endl;
    vector<char> v(s.begin(), s.end());
    map<char,long> m;
    for(int i=0 ;i<v.size();i++){
        char c = v[i];
        // cout << c << " ";
        m[c]++;
    }
    long times = n/v.size();
    long tot = times*m['a'];
    long rem= n%v.size();
    for(int i=0;i<rem;i++){
        if(v[i]=='a') tot++;
    }
    cout<< tot;
}