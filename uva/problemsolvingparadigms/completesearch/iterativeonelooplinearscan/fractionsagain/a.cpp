#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int s = n * 2;
        vector<pair<int, int>> v;
        while (s != n)
        {
            int r = (s * n) / (s - n);
            if ((s * n) % (s - n) == 0)
                v.push_back(make_pair(r, s));
            s--;
        }
        reverse(v.begin(), v.end());
        cout << v.size() <<endl;
        for (auto &i : v)
        {
            printf("1/%d = 1/%d + 1/%d\n", n, i.first, i.second);
        }
    }
}