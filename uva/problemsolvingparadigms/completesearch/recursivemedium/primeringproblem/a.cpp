#include <bits/stdc++.h>
using namespace std;
int mx;
bool isprime(int c)
{
    for (int i = 2; i * i <= c; i++)
    {
        if (c % i == 0)
            return false;
    }
    return true;
}
void rec(vector<int> v, int c)
{
    if (c == mx)
    {
        if (isprime(v[mx - 1] + 1))
        {
            bool isg = false;
            for (auto &i : v)
            {
                (isg) ? printf(" ") : isg = true;
                printf("%d",i);
            }
            printf("\n");
        }
    }
    for(int i=2;i<=mx;i++){
        if(isprime(v[c-1]+i) && find(v.begin(),v.end(),i)==v.end()){
            v[c]=i;
            rec(v,c+1);
        }
    }
}

int main()
{
    int n;
    int cs = 1;
    bool fst=false;
    while (cin >> n)
    {
        (fst)? printf("\n"): fst=true;
        printf("Case %d:\n", cs++);
        mx = n;
        vector<int> v(mx);
        v[0]=1;
        rec(v, 1);
    }
}