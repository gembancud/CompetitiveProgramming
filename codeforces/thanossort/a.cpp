#include <bits/stdc++.h>
using namespace std;

bool issorted(vector<int> v)
{
    int prev = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << endl;
        if (v[i] >= prev)
            prev = v[i];
        else
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int mex = 0;
    int curr = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    queue<vector<int>> st;
    vector<int> tv = v;
    while (tv.size() != 1)
    {
        // cout << "tv" << endl;
        // for (auto &i : tv)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;

        if (issorted(tv))
        {
            // cout << "iyot" << endl;
            break;
        }
        else
        {
            n =tv.size()/2;
            vector<int> l(tv.begin(), tv.begin() + n);
            vector<int> r(tv.begin() + n, tv.end());
            // cout << "l" << endl;
            // for (auto &i : l)
            // {
            //     cout << i << " ";
            // }
            // cout << endl;
            // cout << "r" << endl;
            // for (auto &i : r)
            // {
            //     cout << i << " ";
            // }
            // cout << endl;

            st.push(l);
            st.push(r);
        }
        tv = st.front();
        st.pop();
    }

    cout << tv.size() << endl;
}
