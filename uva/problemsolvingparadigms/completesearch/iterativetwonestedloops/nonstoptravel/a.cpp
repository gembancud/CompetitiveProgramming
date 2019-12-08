#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int cc = 1;
    while (cin >> n)
    {
        if (n == -1)
            break;
        printf("Case %d: ", cc);
        vector<double> l(n);
        vector<int> g(n);
        vector<int> y(n);
        vector<int> r(n);
        for (int i = 0; i < n; i++)
        {
            cin >> l[i] >> g[i] >> y[i] >> r[i];
        }
        vector<int> gdf;
        bool comma = false;
        bool none = true;
        for (double i = 30; i <= 60; i++)
        {
            bool isg = true;
            for (int j = 0; j < n; j++)
            {
                double tm = (l[j] * 3600.0) / i;
                int t = g[j] + y[j] + r[j];
                double pf = fmod(tm,t);
                if (pf > g[j] + y[j])
                {
                    isg = false;
                    break;
                }
            }

            if (isg)
            {
                none = false;
                gdf.push_back(i);
            }
            else
            {
                if (gdf.size() == 1)
                {
                    if (comma)
                        printf(", ");
                    printf("%d", gdf[0]);
                    comma = true;
                }
                else if (!gdf.empty())
                {
                    if (comma)
                        printf(", ");

                    printf("%d-%d", gdf[0], gdf[gdf.size() - 1]);
                    comma = true;
                }
                gdf.clear();
            }
        }
        if (comma && !none &&!gdf.empty())
            printf(", ");
        if (!gdf.empty())
        {
            if (gdf.size() == 1)
                printf("%d", gdf[0]);
            else
                printf("%d-%d", gdf[0], gdf[gdf.size() - 1]);
        }

        if (none)
            cout << "No acceptable speeds.";
        cout << endl;
        cc++;
    }
}