#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a = 0.0, b = 0.0, c = 0.0, d = 0.0;
    for (a = 0.01; a<=20.0; a = a + 0.01)
    {
        for (b = a+0.01; b <= 20.0; b = b + 0.01)
        {
            if(a+b>=20.0) break;
            for (c = b+0.01; c <= 20.0; c = c + 0.01)
            {
                if(a+b+c>=20.0) break;
               double d= 20.0-a-b-c;
                if(d<=0) continue;
                printf("evaluating %.2f %.2f %.2f %.2f\n",a,b,c,d);
                if(a+b+c+d==a*b*c*d) printf("%.2f %.f %.2f %.2f\n",a,b,c,d);
            }
        }
    }
}