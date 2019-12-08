#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long a, b;
        cin >> a>>b;
        if (a == b)
        {
            cout << "="
                 << "\n";
            continue;
        }
        (a > b) ? cout << ">" : cout << "<";
        cout<<"\n";
    }
}