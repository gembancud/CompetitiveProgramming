#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else
        return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v1, v2;
    int lcmf, gcdf;
    int tot=0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    lcmf = v1[0];
    for (int i = 1; i < n; i++)
    {
        lcmf = lcm(lcmf,v1[i]); 
    }

    gcdf = v2[0];
    for (int i = 1; i < m; i++)
    {
        gcdf = gcd(gcdf,v2[i]);
    }
    
    for(int i = lcmf,j=2;i<=gcdf;i=lcmf*j,j++){
        if(gcdf%i==0) tot++;
    }
    cout<<tot;

}