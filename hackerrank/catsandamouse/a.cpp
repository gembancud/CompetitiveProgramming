#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (abs(a - c) < abs(b - c))
        {
            cout << "Cat A\n";
            continue;
        }
        else if (abs(a - c) == abs(b - c))
        {
            cout << "Mouse C\n";
            continue;
        }
        else
        {
            cout << "Cat B\n";
            continue;
        }
    }
}