#include <bits/stdc++.h>
using namespace std;

int k;
string s;
vector<vector<char>> g1(5, vector<char>(6));
vector<vector<char>> g2(5, vector<char>(6));
int ith = 0;
set<string> donewords;
vector<char> wv(5);


bool isvalid(vector<char> wv)
{
    for (int i = 0; i < 5; i++)
    {
        if (!binary_search(g2[i].begin(), g2[i].end(), wv[i])){
            // printf("no %c. is not in ",wv[i]);
            // for(auto&j:g2[i]) printf(" %c",j);
            // printf("\n");
            return false;
        }
    }
    return true;
}

string rec()
{
    for (int a = 0; a < 6; a++)
    {
        for (int b = 0; b < 6; b++)
        {
            for (int c = 0; c < 6; c++)
            {
                for (int d = 0; d < 6; d++)
                {
                    for (int e = 0; e < 6; e++)
                    {
                        wv[0] = g1[0][a];
                        wv[1] = g1[1][b];
                        wv[2] = g1[2][c];
                        wv[3] = g1[3][d];
                        wv[4] = g1[4][e];
                        string wvs(wv.begin(),wv.end());
                        if (binary_search(donewords.begin(), donewords.end(),wvs)){
                            // printf("wtf\n");
                            continue;
                        }
                        // printf("processing %s\n",wvs.c_str());
                        if (isvalid(wv))
                        {
                            donewords.insert(wvs);
                            ith++;
                            // printf("found %dth %s\n", ith, string(wv.begin(), wv.end()).c_str());
                            if (ith == k)
                            {
                                return string(wv.begin(), wv.end());
                            }
                        }
                    }
                }
            }
        }
    }
    return "NO";
}


int main()
{
    // freopen("t2a","w",stdout);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> k;
        for (int i = 0; i < 6; i++)
        {
            cin >> s;
            vector<char> vc1(s.begin(), s.end());
            for (int j = 0; j < 5; j++)
            {
                g1[j][i] = vc1[j];
            }
        }
        for (int i = 0; i < 5; i++)
            sort(g1[i].begin(), g1[i].end());

        // for(int i =0;i<5;i++){
        //     for(int j=0;j<6;j++){
        //         printf("%c ",g1[i][j]);
        //     }
        //     printf("\n");
        // }
        // printf("\n");


        for (int i = 0; i < 6; i++)
        {
            cin >> s;
            vector<char> vc2(s.begin(), s.end());
            for (int j = 0; j < 5; j++)
            {
                g2[j][i] = vc2[j];
            }
        }

        for (int i = 0; i < 5; i++)
            sort(g2[i].begin(), g2[i].end());

        // for(int i =0;i<5;i++){
        //     for(int j=0;j<6;j++){
        //         printf("%c ",g2[i][j]);
        //     }
        //     printf("\n");
        // }

        printf("%s\n", rec().c_str());

        ith = 0;
        donewords.clear();
        g1.clear();
        g2.clear();
        g1.resize(5, vector<char>(6));
        g2.resize(5, vector<char>(6));
    }
}