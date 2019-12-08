#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool sp = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j + 1 == n)
                sp = false;
            (sp) ? cout << " " : cout << "#";
        }
        cout << "\n";
        sp = true;
    }
}