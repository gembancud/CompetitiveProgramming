#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < k; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }

    sort(v.begin(), v.end(), greater<int>());
    auto on = accumulate(v.begin(), v.begin() + n, 0.0);
    auto off = accumulate(v.begin() + n, v.end(), 0.0);
    // cout << "on: "<<on <<" of: "<<off<<endl;
    auto i = 0.0;
    auto wer = [&]() { return (on + off) / (n - i); };
    while (wer() < v[i] && i < n)
    {
        // cout<<"removing: " << v[i] << endl;
        on -= v[i];
        i++;
    }
    cout << setprecision(10) << fixed << wer() << "\n";
}