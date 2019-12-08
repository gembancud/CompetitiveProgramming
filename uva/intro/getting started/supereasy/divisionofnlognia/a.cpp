#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    while (k != 0)
    {
        int x, y;
        cin >> x >> y;
        while (k--)
        {
            int n, m;
            cin >> n >> m;
            if (x == n || y == m)
                cout << "divisa"
                     << "\n";
            else if (x < n && y < m)
                cout << "NE"
                     << "\n";
            else if (x < n && y > m)
                cout << "SE"
                     << "\n";
            else if (x > n && y < m)
                cout << "NO"
                     << "\n";
            else if (x > n && y > m)
                cout << "SO"
                     << "\n";
        }
        cin >> k;
    }
}