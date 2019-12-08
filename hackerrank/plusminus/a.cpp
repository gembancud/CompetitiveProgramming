#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    long double p = 0, n = 0, z = 0;
    for(int j=0;j<q;j++)
    {
        int i;
        cin >> i;
        if (i > 0)
            p ++;
        else if (i < 0)
            n ++;
        else
            z ++;
    }
    p /= q;
    n /= q;
    z /= q;
    cout << p << "\n" << n << "\n" << z << "\n";
}