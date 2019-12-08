#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> possible;
    for (int i = 0; i <= 20; i++)
    {
        possible.insert(i);
        possible.insert(i * 2);
        possible.insert(i * 3);
    }
    possible.insert(50);
    vector<int> v(possible.begin(), possible.end());

    int n;
    while (cin >> n)
    {
        if (n <= 0)
            break;
        int perm = 0;
        set<vector<int>> comb;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < v.size(); j++)
            {
                for (int k = 0; k < v.size(); k++)
                {
                    if (v[i] + v[j] + v[k] == n)
                    {
                        vector<int> tv;
                        tv.push_back(v[i]);
                        tv.push_back(v[j]);
                        tv.push_back(v[k]);
                        sort(tv.begin(), tv.end());
                        comb.insert(tv);
                        perm++;
                    }
                }
            }
        }
        if (perm == 0)
            printf("THE SCORE OF %d CANNOT BE MADE WITH THREE DARTS.\n", n);
        else
        {
            printf("NUMBER OF COMBINATIONS THAT SCORES %d IS %d.\n", n, int(comb.size()));
            printf("NUMBER OF PERMUTATIONS THAT SCORES %d IS %d.\n", n, perm);
        }
        for (int i = 0; i < 70; i++)
            printf("*");
        cout << endl;
    }
    cout << "END OF OUTPUT" << endl;
}