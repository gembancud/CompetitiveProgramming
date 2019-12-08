#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        cout << "my vector: ";
        for (auto &i : v)
            cout << i << " ";
        cout << endl;

        deque<int> dq(k);
        int i = 0;
        for (; i < k; i++)
        {
            while (!dq.empty() && v[i] >= dq.back())
                dq.pop_back();
            dq.push_back(i);
        }

        for (; i < n; i++)
        {
            cout << v[dq.front()] << " \n";
            while (!dq.empty() && dq.front() <= i - k)
            {
                dq.pop_front();
            }
            while (!dq.empty() && v[i] >= v[dq.back()])
            {
                dq.pop_back();
            }
            dq.push_back(i);
            cout << "dq's contents: ";
            for(auto&i:dq) cout << i <<" ";
            cout <<endl;
        }
        cout << v[dq.front()] << " \n";
    }
}