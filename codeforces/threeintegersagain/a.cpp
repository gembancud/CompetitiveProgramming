#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    int c = 1;
    int nb, na;
    while (q--)
    {
        long long a, b;
        cin >> a >> b;
        long long men = min(a, b);
        long long mex = max(a, b);
        na = men - c;
        nb = mex - na;
        cout << c <<" "<< na << " "<< nb << endl;
    }
}