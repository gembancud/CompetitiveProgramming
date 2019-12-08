#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        vector<long long> v(n);
        for (auto &i : v)
            cin >> i;
        sort(v.begin(), v.end());
        long long mx = INT_MIN;
        bool done = false;
        for (int i = n-1; i >=3; i--)
        {
            for (int a = 0; a < i; a++)
            {
                for (int b = a + 1; b < i; b++)
                {
                    for (int c = b + 1; c < i; c++)
                    {
                        // printf("cmp %d %d %d\n",v[a],v[b],v[c]);
                        if (v[a] + v[b] + v[c] == v[i])
                        {
                            mx = v[i];
                            done = true;
                        }
                        if (done)
                            break;
                    }
                    if (done)
                        break;
                }
                if (done)
                    break;
            }
            if (done)
                break;
        }
        (mx != INT_MIN) ? printf("%lld\n", mx) : printf("no solution\n");
    }
}