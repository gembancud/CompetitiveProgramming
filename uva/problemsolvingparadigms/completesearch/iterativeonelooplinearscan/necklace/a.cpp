#include <bits/stdc++.h>
using namespace std;

int main()
{
    double vt, v0;
    while (cin >> vt >> v0)
    {
        if (vt == v0 && vt == 0)
            break;
        double div = 1;
        double mxdiv;
        double mxln = INT_MIN;
        bool g = false;
        bool uniq = true;
        while (vt / div > v0)
        {
            g = true;
            double tmp = vt / div;
            double ln = 0.3 * sqrt(tmp - v0) * div;
            // printf("%f,%f\n",div,ln);
            if (to_string(ln) ==to_string(mxln))
            {
                // printf("uniq triggered\n");
                uniq = false;
            }
            else if (ln > mxln)
            {
                // printf("%f was bigger than %f\n ",ln,mxln);
                mxln = ln;
                mxdiv = div;
                uniq = true;

            }
            div++;
        }
        // printf("exiting cus %f is not greater than than %f\n",vt/div,v0);
        (g && uniq) ? cout << mxdiv << endl : cout << 0 << endl;
    }
}