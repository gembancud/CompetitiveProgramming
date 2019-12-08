#include <bits/stdc++.h>
using namespace std;


int main()
{
    // freopen("aout", "w", stdout);
    double cube = 0;
    vector<vector<int>> m;
    for (int i = 6; i <= 200; i++)
    {
        for (int a = 2; a <i; a++)
        {
            for (int b = a; b < i; b++)
            {
                for (int c = b; c < i; c++)
                {
                    if (i * i * i == (a * a * a) + (b * b * b) + (c * c * c))
                    {
                        printf("Cube = %d, Triple = (%d,%d,%d)\n", i, a, b, c);
                    }
                }
            }
        }
    }
}