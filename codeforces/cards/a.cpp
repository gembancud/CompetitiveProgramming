#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, o;
    long long int max;
    cin >> o >> x;
    long til = o + x;
    if (x == o)
    {
        cout << 0 << endl;
        for (int i = 0; i < o; i++)
        {
            cout << "o";
        }
        for (int i = 0; i < o; i++)
        {
            cout << "x";
        }
    }

    if (o > x)
    {
        long a = x / 2;
        long b = x - a;
        max += pow(o, 2);
        max -= pow(a, 2);
        max -= pow(b, 2);
        cout << max << endl;

        for (long i = 0; i < a; i++)
        {
            cout << "x";
        }
        for (long i = 0; i < o; i++)
        {
            cout << "o";
        }
        for (long i = 0; i < b; i++)
        {
            cout << "x";
        }
    }

    if (o < x)
    {
        max = -pow(x - o, 2);
        cout << max << endl;
        for (int i = 0; i < til; i++)
        {
            if (o == 0)
                cout << "x";
            else if (i % 2 == 0)
            {
                cout << "x";
                x--;
            }
            else
            {
                cout << "o";
                o--;
            }
        }
    }
    cout << max <<endl;
}