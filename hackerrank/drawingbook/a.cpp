#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;
    //forward pass
    if(n%2==0) n++;
    if(p==n) {
        cout << 0;
        return 0;
    }
    for (int i = 1, j = 0; i <= n; i += 2, j++)
    {
        // printf("page: %d , need %d\n", i, p);
        if (p <= i)
        {
            // cout << "tonks";
            cout << j;
            return 0;
        }
        if (n - i <= p)
        {
            // printf("%d and %d\n",n-i,p);
            cout << j;
            return 0;
        }
    }
    // cout << "am out";

    // backward pass
}
