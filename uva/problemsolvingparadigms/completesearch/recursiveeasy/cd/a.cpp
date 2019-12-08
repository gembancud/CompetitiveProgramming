#include <bits/stdc++.h>
using namespace std;

pair<int,vector<int>> rec(int n, vector<int> v, int cur,vector<int> g)
{
    if (cur == 0 || n == 0)
        return make_pair(0,vector<int>());
    if (v[cur - 1] > n)
        return rec(n, v, cur - 1,g);
    else
    {
        auto tmp1 = rec(n - v[cur - 1], v, cur - 1,g);
        tmp1.first+= v[cur-1];
        auto tmp2 = rec(n, v, cur - 1,g);
        if (tmp1.first > tmp2.first)
        {
            tmp1.second.push_back(v[cur-1]);
            return tmp1;
        }
        else
        {
            return tmp2;
        }
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        int t;
        cin >> t;
        vector<int> v(t);
        for (auto &i : v)
            cin >> i;
        auto res = rec(n, v, t,vector<int>());
        for (auto &i : res.second)
            printf("%d ", i);
        printf("sum:%d\n", res.first);
    }
}