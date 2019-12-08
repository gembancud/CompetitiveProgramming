#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;int cc=1;
    while (cin >> n)
    {
        int v[n];
        for (int &i : v)
            cin >> i;
        long long mx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                long long s = 1;
                for (int k = i; k < j; k++)
                {
                    s *= v[k];
                    mx = max(mx, s);

                }
            }
        }
        printf("Case #%d: The maximum product is %lld.\n\n",cc,mx);
        cc++;
    }
}