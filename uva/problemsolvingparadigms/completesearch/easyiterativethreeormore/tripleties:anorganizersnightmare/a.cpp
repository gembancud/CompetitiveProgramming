#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> p;
        map<int, int> wins;
        vector<vector<int>> m(n, vector<int>(n));
        for (auto &i : m)
            for (auto &j : i)
                cin >> j;

        for (auto &i : m)
            p.push_back(accumulate(i.begin(), i.end(), 0));

        for (auto &i : p)
            wins[i]++;

        int totm = 0;
        vector<vector<int>> fv;
        for (auto &i : wins)
        {
            if (i.second == 3)
            {
                totm++;
                vector<int> tp;
                for (int j = 0; j < p.size(); j++)
                {
                    if (p[j] == i.first)
                        tp.push_back(j);
                }
                if(m[tp[0]][tp[1]] == m[tp[1]][tp[2]] && m[tp[1]][tp[2]] == m[tp[2]][tp[0]])
                reverse(tp.begin(),tp.end());
    
                // while (!(tp[0] > tp[1] && tp[1] > tp[2]) || !(tp[0] < tp[1] && tp[1] < tp[2]))
                //     rotate(tp.begin(), tp.begin() + 1, tp.end());

                for (auto &i : tp)
                    i++;
                fv.push_back(tp);
            }
        }
        if (totm == 0)
            printf("0\n");
        else
        {
            printf("%d\n", totm);
            for (auto &i : fv)
            {
                bool f = false;
                for (auto &j : i)
                {
                    (f) ? printf(" %d", j) : printf("%d", j);
                    f = true;
                }
                cout << endl;
            }
        }
    }
}
