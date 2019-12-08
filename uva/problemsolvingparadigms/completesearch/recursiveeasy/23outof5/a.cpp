#include <bits/stdc++.h>
using namespace std;

bool rec(vector<long> v, long i, long val)
{
    if (val == 23)
        if(i==5)
        return true;
    if (i == 5)
    {
        // prlongf("final failed is %d\n",val);
        return false;
    }
    auto pl = rec(v, i + 1, val + v[i]);
    auto mn = rec(v, i + 1, val - v[i]);
    auto tm = rec(v, i + 1, val * v[i]);
    if (pl || mn || tm)
        return true;
    return false;
}

int main()
{
    long a, b, c, d, e;
    while (cin >> a >> b >> c >> d >> e)
    {
        if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0)
            break;
        bool isg=false;
        for (long i = 0; i < 5; i++)
        {
            for (long j = 0; j < 5; j++)
            {
                if (j == i)
                    continue;
                for (long k = 0; k < 5; k++)
                {
                    if (k == i || k == j)
                        continue;
                    for (long q = 0; q < 5; q++)
                    {
                        if (q == k || q == j || q == i)
                            continue;
                        for (long w = 0; w < 5; w++)
                        {
                            if (w == q || w == k || w == j || w == i)
                                continue;
                            vector<long> v(5);
                            v[i] = a;
                            v[j] = b;
                            v[k] = c;
                            v[q] = d;
                            v[w] = e;
                            if (rec(v, 1, v[0])) {
                                isg=true;
                                printf("Possible\n");
                            }
                            if(isg) break;
                        }
                            if(isg) break;
                    }
                            if(isg) break;
                }
                            if(isg) break;
            }
                            if(isg) break;
        }
        if(!isg) printf("Impossible\n");
    }
}