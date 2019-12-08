#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        if (s == "0")
            break;
        string num = s.substr(0, s.length() - 1);
        int n = stoi(num);
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        unordered_map<int, int> m; //val:idx
        for (int i = 0; i < n; i++)
        {
            m[v[i]] = max(m[v[i]], i);
        }
        bool isg = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int dif = v[i] - v[j];
                int wnt = v[j]-dif;
                if (wnt < 0)
                    continue;
                if (m.find(wnt) != m.end())
                {
                    if (m[wnt] > j){
                        // printf("seq is %d %d %d\n", v[i],v[j],wnt);
                        isg = false;
                    }
                }
                if (!isg)
                    break;
            }
            if (!isg)
                break;
        }
        (isg) ? printf("yes\n") : printf("no\n");
    }
}