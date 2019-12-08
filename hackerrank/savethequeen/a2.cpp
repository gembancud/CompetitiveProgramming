#include <bits/stdc++.h>
using namespace std;

double ave(double a, double b, double i)
{
    return double((a + b) / i);
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> soldiers(k);
    for (int i = 0; i < k; i++)
    {
        cin >> soldiers[i];
    }
    sort(soldiers.begin(), soldiers.end(), greater<int>());
    int fight = accumulate(soldiers.begin(), soldiers.begin() + n, 0);
    int backup = accumulate(soldiers.begin() + n, soldiers.end(), 0);
    int i = 0;
    for (; i < n; i++)
    {
        if (soldiers[i] > ave(fight, backup, n - i))
            fight -= soldiers[i];
        else
            break;
    }
    cout << setprecision(10) << fixed << ave(fight, backup, n-i);
}