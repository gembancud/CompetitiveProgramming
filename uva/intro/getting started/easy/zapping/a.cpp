#include <bits/stdc++.h>
using namespace std;

void cycl(int &a)
{
    a--;
    if (a < 0)
        a = 99;
}

void cycr(int &a)
{
    a++;
    if (a > 99)
        a = 0;
}
int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        if (a == -1 && b == -1)
            break;
        int tmpal = a;
        int tmpar = a;
        int leftcount = 0, rightcount = 0;
        while (tmpal != b)
        {
            cycl(tmpal);
            leftcount++;
        }
        while (tmpar != b)
        {
            cycr(tmpar);
            rightcount++;
        }
        int mn = min(leftcount, rightcount);
        cout <<mn <<endl;
    }
}