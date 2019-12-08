#include <bits/stdc++.h>
using namespace std;

bool isgood(deque<int> dq, int d)
{
    int total = 0;
    for (int i = 0; i < dq.size(); i++)
    {
        total += dq[i];
    }
    if (total == d)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int d, m;
    int num;
    cin >> d >> m;
    int res = 0;
    if(m==1){
        for(auto&i:v){
            if(i==d) res++;
        }
        cout <<res;
        return 0;
    }
    deque<int> dq;
    for (int i = 0; i < m; i++)
    {
        dq.push_back(v[i]);
    }
    for (int i = m; i < v.size(); i++)
    {
        if (isgood(dq, d))
            res++;
        dq.pop_front();
        dq.push_back(v[i]);
    }
    cout << res;
}