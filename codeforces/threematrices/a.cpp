#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<double>> v(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            double x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                cout << setprecision(10) << fixed << v[i][j] << " ";
            else
                cout << setprecision(10) << fixed << (v[i][j] + v[j][i]) / 2.0 << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                cout << setprecision(10) << fixed << 0.0 << " ";
            else
                cout << setprecision(10) << fixed << (v[i][j]) - (v[i][j] + v[j][i]) / 2.0 << " ";
        }
        cout << "\n";
    }
}