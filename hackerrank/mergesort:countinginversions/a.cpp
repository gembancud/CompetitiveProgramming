#include <vector>
#include <iostream>
using namespace std;
long long swaps = 0;

vector<int> mergesort(vector<int> v)
{
    int sz = v.size();
    if (sz == 1)
    {
        // cout << "passedbasecase " << v[0] <<endl;
        return v;
    }
    vector<int> lv(v.begin(), v.begin() + sz / 2);
    vector<int> rv(v.begin() + sz / 2, v.end());
    auto left = mergesort(lv);
    auto right = mergesort(rv);
    vector<int> fv;
    int i = 0, j = 0;
    while (i != left.size() || j != right.size())
    {
        if (i == left.size())
        {
            fv.push_back(right[j]);
            j++;
        }
        else if (j == right.size())
        {
            fv.push_back(left[i]);
            i++;
        }
        else if (left[i] <= right[j])
        {
            fv.push_back(left[i]);
            i++;
        }
        else if (left[i] > right[j])
        {
            fv.push_back(right[j]);
            j++;
            swaps += left.size() - i;
        }
    }
    return fv;

    // reverse(left.begin(), left.end());
    // reverse(right.begin(), right.end());
    // while (!left.empty() || !right.empty())
    // {
    //     if (left.empty())
    //     {
    //         fv.push_back(right.back());
    //         right.pop_back();
    //     }
    //     else if (right.empty())
    //     {
    //         fv.push_back(left.back());
    //         left.pop_back();
    //     }
    //     else if (left.back() <= right.back())
    //     {
    //         fv.push_back(left.back());
    //         left.pop_back();
    //     }
    //     else if (left.back() > right.back())
    //     {
    //         fv.push_back(right.back());
    //         right.pop_back();
    //         swaps+=left.size();
    //     }
    // }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        swaps = 0;
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        auto nv = mergesort(v);
        // for(auto&i:v)
        //     cout<<i<<" ";
        // cout<<endl;
        // for(auto&i:nv)
        //     cout<<i<<" ";
        // cout<<endl;
        // printf("swaps: %d\n",swaps);
        cout << swaps << endl;
    }
}