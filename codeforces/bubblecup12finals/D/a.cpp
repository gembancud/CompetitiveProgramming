#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, k;
    cin >> n >> k;
    vector<int> grams(n);
    for (int i = 0; i < n; i++)
    {
        cin >> grams[i];
    }
    int boost;
    cin >> boost;
    vector<int> cost(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }
    unsigned long long tc = 0;
    bool canfinish = true;
    vector<long> tobuy;
    for (int i = 0; i < n; i++)
    {
        tobuy.push_back(cost[i]);
        sort(tobuy.begin(), tobuy.end(), greater<int>());
        while (k < grams[i] && !tobuy.empty())
        {
            tc += tobuy.back();
            tobuy.pop_back();
            k += boost;
        }
        if (k<grams[i]&&tobuy.empty())
        {
            canfinish = false;
            break;
        }
    }
    (canfinish) ? cout << tc : cout << "-1";
}