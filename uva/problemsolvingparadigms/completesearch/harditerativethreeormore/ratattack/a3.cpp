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
        vector<vector<int>> rt(p, vector<int>(3));
        vector<vector<int>> grid(1025,vector<int>(1025));
        for (int i = 0; i < p; i++)
        {
            cin >> rt[i][0] >> rt[i][1] >> rt[i][2];
        }
        vector<int> mx(3, 0);
        for (auto &ii : rt)
        {
            int sti = ii[0] - d;
            int fni = ii[0] + d;
            int stj = ii[1] - d;
            int fnj = ii[1] + d;
            for (int i = sti; i <= fni; i++)
            {
                for (int j = stj; j <= fnj; j++)
                {
                    if (i < 0 || j < 0 || i > 1024 || j > 1024)
                        continue;
                    // printf("bout to add %d at %d %d\n",ii[2],ii[0],ii[1]);
                    grid[i][j] += ii[2];
                    if (grid[i][j] > mx[2])
                    {
                        mx[0] = i;
                        mx[1] = j;
                        mx[2] = grid[i][j];
                    }
                }
            }
        }
        printf("%d %d %d\n",mx[0],mx[1],mx[2]);
        // for(auto&i:grid){
        //     for(auto&j:i){
        //         cout<<" " <<j;
        //     }
        //     cout<<endl;
        // }
    }
}