#include <bits/stdc++.h>
using namespace std;

vector<int> v(3, 0);
void prent()
{
    for (int i = 0; i < v[0]; i++)
    {
        cout << "|";
    }
    cout << "+";
    for (int i = 0; i < v[1]; i++)
    {
        cout << "|";
    }
    cout << "=";
    for (int i = 0; i < v[2]; i++)
    {
        cout << "|";
    }
}
int main()
{
    char x;
    int placer = 0;
    while (cin >> x)
    {
        if (x == '+')
        {
            placer = 1;
            continue;
        }
        else if (x == '=')
        {
            placer = 2;
            continue;
        }
        else
            v[placer]++;
    }
    if (v[0] + v[1] == v[2])
    {
        prent();
        return 0;
    }
    else if (abs(v[2] - v[1] - v[0]) != 2)
    {
        cout << "Impossible" << endl;
        return 0;
    }
    else if (v[0] + v[1] > v[2])
    {
        (v[0] > 1) ? v[0]-- : v[1]--;
        v[2]++;
        prent();
        return 0;
    }
    else if (v[2] > v[0] + v[1])
    {
        (v[0] > 1) ? v[0]++ : v[1]++;
        v[2]--;
        prent();
        return 0;
    }
}