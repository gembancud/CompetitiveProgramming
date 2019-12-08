// TODO Gils wrong code
// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> v(3, vector<int>(3));
// vector<bool> coleditted(3, false);
// int row(int i)
// {
//     return v[i][0] + v[i][1] + v[i][2];
// }
// int col(int i)
// {
//     return v[0][i] + v[1][i] + v[2][i];
// }
// // !DID NOT FINISH
// int main()
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int k = 0; k < 3; k++)
//         {
//             cin >> v[i][k];
//         }
//     }
//     int tc = 0;
//     for (int i = 0; i < 3; i++)
//     {
//         if (row(i) != 15)
//         {
//             // printf("row %d is not 15\n", i);
//             int cmp = row(i);
//             int tmxj = 0;
//             int tmpmax=0;
//             for (int j = 0; j < 3; j++)
//             {
//                 if(coleditted[j]) continue;
//                 // printf("checking %d...\n ", v[i][j]);
//                 if (col(j) == cmp && tmpmax< v[i][j])
//                 {
//                     // printf("%d is bigger than %d\n", v[i][j], v[i][tmxj]);
//                     tmxj = j;
//                     tmpmax = v[i][tmxj];
//                     // printf("D: choosing row %d, col %d w/ val: %d\n", i, tmxj, v[i][tmxj]);
//                 }
//             }
//             // printf("chosen col is %d\n", tmxj);
//             int oldval= v[i][tmxj];
//             v[i][tmxj] += (15 - cmp);
//             int newval = v[i][tmxj];
//             coleditted[tmxj] = true;
//             // printf("col %d is now editted\n",tmxj);
//             // printf("new values is %d\n", v[i][tmxj]);
//             tc += abs(oldval-newval);
//         }
//     }
//     cout << tc << endl;

//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         cout << v[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v(3, vector<int>(3));
    vector<vector<vector<int>>> pre{
        {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
        {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
        {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
        {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
        {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
        {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
        {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
        {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}}};
    int totals = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            cin >> v[i][k];
        }
    }
    for (auto &p : pre)
    {
        int total = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (p[i][k] != v[i][k])
                    total += max(p[i][k], v[i][k]) - min(p[i][k], v[i][k]);
            }
        }
        totals = min(totals, total);
    }
    cout << totals;
}
