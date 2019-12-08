#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int deg;
        cin >> deg;
        vector<long> pol(deg + 1);
        for (int i = 0; i < deg+1; i++)
            cin >> pol[i];
        int d, k;
        cin >> d >> k;
        int cd = 0;
        int cdmx = d;
        int cn = 1;
        long cv = 0;
        for (int i = 0; i < deg+1; i++)
        {
            cv += pol[i] * pow(cn, i);
        }
        // printf("init cv: %d\n", cv);
        int it = 0;
        while (it < k)
        {
            if (cd == cdmx)
            {
                cn++;
                cdmx = d * cn;
                cd = 1;
                cv = 0;
                for (int i = 0; i < deg+1; i++)
                {
                    cv += pol[i] * pow(cn, i);
                }
                // printf("new cv: %d\n", cv);
            }
            else
                cd++;
            it++;
            // cout << cv <<" ";
        }
        cout << cv << endl;
    }
}