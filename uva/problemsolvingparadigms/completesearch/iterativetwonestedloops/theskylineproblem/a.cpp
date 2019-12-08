#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(10001,0);
    int l, h, r;
    int mxr = 0;
    while (cin >> l >> h >> r)
    {
        mxr = max(mxr, r);
        for (int i = l; i < r; i++)
        {
            v[i] = max(v[i], h);
        }
    }
    // for (int i = 0; i <= 30; i++)
    //     printf("%d:%d ",i, v[i]);
    
    // cout << endl;
    // printf("mxr is %d\n",mxr);
    int ch = 0;
    for (int i = 0; i <= 10001; i++)
    {
        if (ch != v[i])
        {
            printf("%d %d", i, v[i]);
            if (i != mxr)
                printf(" ");
        }
        // else if (ch > v[i])
        // {
        //     printf("%d %d", i - 1, v[i]);
        //     if (i-1 != mxr)
        //         printf(" ");
        // }
        ch = v[i];
    }
    printf("\n");
}