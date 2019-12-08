#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int maxheight=0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >>x;
        maxheight = max(maxheight, x);
    }
    if(k>= maxheight) cout << 0 <<endl;
    else cout<< maxheight - k <<endl;
}