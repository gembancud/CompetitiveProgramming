#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long> a(n);
    vector<long> b(n);

    for (int i = 0; i < n; i++)
    {
        long ai;
        cin >> ai;
        a[i] = ai;
    }
    for (int i = 0; i < n; i++)
    {
        long bi;
        cin >> bi;
        b[i] = bi;
    }
    long long sereja = 0;
    for (int i = 0; i < n; i++)
    {
        if (double(b[i]) / 2.0 <= a[i] && b[i]!=1)
        {
            long long x = ceil(double(b[i]) / 2.0);
            long long y = b[i] - x;
            sereja += x * y;
        }
        else
        {
            sereja--;
            continue;
        }
    }
    cout << sereja << endl;
}