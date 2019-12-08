#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> v(s.begin(), s.end());
    reverse(v.begin(), v.end());
    stack<char> st;
    for (auto&i:v)
    {
        st.push(i);
    }

    long long tot = 0;
    long p = 0;
    while (!st.empty())
    {
        auto tmp = st.top();
        // cout << tmp << " ";
        st.pop();
        if (tmp == 'B')
            tot += pow(2, p);
        p++;
        // auto tmp = st.top();
        // st.pop();
        // if (tmp == 'B')
        // {
        //     tot++;
        //     st.push('R');
        //     while (st.size() != n){
        //         st.push('B');
        //     }
        // }
    }
    cout << tot << endl;
}