#include <bits/stdc++.h>
using namespace std;

int kadane(vector<int> bets)
{
    int mx = bets[0];
    int curmx = bets[0];

    for(int i=1;i<bets.size();i++){
        curmx = max(bets[i],bets[i]+curmx);
        mx = max(curmx,mx);
    }
    return mx;
}

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        vector<int> bets(n);
        for (auto &i : bets)
            cin >> i;
        int res = kadane(bets);
        (res>0) ? printf("The maximum winning streak is %d.\n",res): printf("Losing streak.\n"); 
    }
}