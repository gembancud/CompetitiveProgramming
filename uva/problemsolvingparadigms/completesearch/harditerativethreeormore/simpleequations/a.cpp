#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<vector<int>> v;
        bool done = false;
        for (int i = -100; i <= 100; i++)
        {
            for (int j = i + 1; j <= 100; j++)
            {
                for (int k = j + 1; k <=100; k++)
                {
                    // printf("%d %d %d\n",i,j,k);
                    if (i + j + k == a && i * j * k == b && i * i + j * j + k * k == c)
                    {
                        vector<int> tv;
                        tv.push_back(i);
                        tv.push_back(j);
                        tv.push_back(k);
                        v.push_back(tv);
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
        if (v.size() == 0)
            printf("No solution.\n");
        else
            for (auto &i : v)
            {
                printf("%d %d %d\n", i[0], i[1], i[2]);
            }
    }
}