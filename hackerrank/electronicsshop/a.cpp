#include <bits/stdc++.h>
using namespace std;

int main()
{
    long b, n, m;
    cin >> b >> n >> m;
    vector<long> key(n);
    vector<long> usb(m);
    for (int i = 0; i < n; i++)
    {
        cin >> key[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> usb[i];
    }
    sort(key.begin(), key.end());
    sort(usb.begin(), usb.end(), greater<int>());

    long mx = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (key[i] + usb[j] < b)
            {
                mx = max(key[i] + usb[j], mx);
            }
        }
    }
    cout << mx;
}