#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int tc = (n / 2 + bool(n % 2))*( m / 2 + bool(m % 2));
    cout << tc;
}
