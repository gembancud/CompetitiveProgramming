#include <bits/stdc++.h>
using namespace std;

int rec(string s, long prev)
{   
    if(s.length() == prev)
    return 1;
    else return 1+rec(to_string(s.length()),s.length());
}

int main()
{
    string s;
    while (cin >> s)
    {
        if (s == "END")
            break;
        cout << rec(s,stol(s))<<endl;
    }
    return 0;
}