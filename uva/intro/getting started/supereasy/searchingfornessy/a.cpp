#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        n-=2, m-=2;
        int tot = (n/3 + bool(n%3)) * (m/3 + bool(m%3));
        cout << tot << endl;
    }
}