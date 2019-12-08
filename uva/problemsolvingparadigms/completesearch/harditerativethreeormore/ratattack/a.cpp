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
        vector<vector<int>> grid(1025, vector<int>(1025));
        int mxi=0;
        int mxj=0;
        while (p--)
        {
            int a, b, c;
            cin >> a >> b >> c;
            grid[a][b] = c;
            mxi = max(mxi,a);
            mxj = max(mxj,a);
        }
        vector<vector<int>> sc(1025, vector<int>(1025));
        vector<int> mx(3);
        for (int i = 0; i <= mxi; i++)
        {
            for (int j = 0; j <= mxj; j++)
            {
                int cum = 0;
                int sti = i - d;
                int fni = i + d;
                int stj = j - d;
                int fnj = j + d;
                for (int q = sti; q <= fni; q++)
                {
                    for (int w = stj; w <= fnj; w++)
                    {
                        if (q < 0 || w < 0 || q > 1024 || w > 1024)
                            continue;
                        cum += grid[q][w];
                        // printf("at grid %d %d the val is %d\n",q,w,grid[q][w]);
                    }
                }
                sc[i][j] = cum;
                if (sc[i][j] > mx[0])
                {
                    mx[0] = sc[i][j];
                    mx[1] = i;
                    mx[2] = j;
                }
                // if(cum!=0) printf("sc[%d][%d] is now %d\n",i,j,cum);
            }
        }
        printf("%d %d %d\n", mx[1], mx[2], mx[0]);
    }
}