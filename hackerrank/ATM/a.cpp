#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    float b, y;
    cin >> w >> b;
    if (w % 5 == 0)
    {
        float z = b - w - 0.5;
        (z >= 0) ? y=z: y=b;
    }
    else
        y = b;
    cout << fixed << setprecision(2) << y << endl;
}