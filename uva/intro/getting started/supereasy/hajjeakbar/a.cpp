#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i=1;
    while (cin >> s)
    {
        if (s == "*")
            break;
        if (s == "Hajj")
            printf("Case %d: Hajj-e-Akbar\n", i);
        else
            printf("Case %d: Hajj-e-Asghar\n", i);
        i++;
    }
}