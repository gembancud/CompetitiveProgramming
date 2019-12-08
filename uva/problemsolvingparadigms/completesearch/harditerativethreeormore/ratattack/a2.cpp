#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        int p;
        cin >> p;
        vector<vector<int>> grid(1025,vector<int>(1025));
        vector<int> mx(3, 0);
        int rat[p][3];
        for (int i = 0; i < p; i++)
        {
            cin >> rat[i][0] >> rat[i][1] >> rat[i][2];
        }
        for (int i = 0; i < 1025; i++)
        {
            for (int j = 0; j < 1025; j++)
            {
                for (auto &k : rat)
                {
                    if (max(abs(k[0] - i), abs(k[1] - j))<= d)
                        grid[i][j] += k[2];
                }
                if (grid[i][j] > mx[2])
                {
                    mx[0] = i;
                    mx[1] = j;
                    mx[2] = grid[i][j];
                }
            }
        }
        printf("%d %d %d\n", mx[0], mx[1], mx[2]);
    }
}