#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t;
    cin >> t;
    string q = t.substr(8, 2);
    // cout <<q<< q.length()<<endl;
    string w = t.substr(0, 8);
    int hh = stoi(t.substr(0, 2));
    int dd = stoi(t.substr(3,2));
    int yy = stoi(t.substr(6,2));
    // cout << w <<endl;
    if (q == "PM" && hh != 12)
    {
        hh += 12;
    }
    else if (q == "AM" && hh == 12)
    {
        hh = 0;
    }
    string hhs = to_string(hh);
    printf("%02d:%02d:%02d", hh, dd, yy);
}