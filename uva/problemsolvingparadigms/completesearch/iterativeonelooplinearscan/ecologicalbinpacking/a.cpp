#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b[3][3];
    while (cin >> b[0][0] >> b[0][1] >> b[0][2] >> b[1][0] >> b[1][1] >> b[1][2] >> b[2][0] >> b[2][1] >> b[2][2])
    {
        int mn = INT_MAX;
        int col[3];
        string res = "";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (j == i)
                    continue;
                for (int k = 0; k < 3; k++)
                {
                    if (k == i || k == j)
                        continue;
                    int tmp = b[0][0] + b[0][1] + b[0][2] + b[1][0] + b[1][1] + b[1][2] + b[2][0] + b[2][1] + b[2][2] - b[0][i] - b[1][j] - b[2][k];
                    // printf("checking case: %d,%d,%d ...val=%d\n", i, j, k, tmp);
                    if (tmp == mn)
                    {
                        col[0] = i;
                        col[1] = j;
                        col[2] = k;

                        string tres = "";
                        for (int &i : col)
                        {
                            switch (i)
                            {
                            case 0:
                                tres += "B";
                                break;
                            case 1:
                                tres += "G";
                                break;
                            case 2:
                                tres += "C";
                                break;
                            }
                        }
                        if(tres<res) res=tres;
                    }
                    else if (tmp < mn)
                    {
                        mn = tmp;
                        col[0] = i;
                        col[1] = j;
                        col[2] = k;

                        res = "";
                        for (int &i : col)
                        {
                            switch (i)
                            {
                            case 0:
                                res += "B";
                                break;
                            case 1:
                                res += "G";
                                break;
                            case 2:
                                res += "C";
                                break;
                            }
                        }
                    }
                }
            }
        }

        printf("%s %d\n", res.c_str(), mn);
    }
}