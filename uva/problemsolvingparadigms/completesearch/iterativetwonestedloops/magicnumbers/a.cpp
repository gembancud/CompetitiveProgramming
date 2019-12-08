#include <bits/stdc++.h>
using namespace std;

unordered_set<long> u;
unordered_set<long> nu;
bool isuniq(long n)
{
    // printf("processing .. %ld\n", n);
    if (u.find(n) != u.end())
        return true;
    if (nu.find(n) != nu.end())
        return false;
    if (to_string(n).length() > 10)
    {
        nu.insert(n);
        return false;
    }
    vector<int> v(10, 0);
    string st= to_string(n);
    for(int i=0;i<st.length();i++){
        int ww= int(st[i])-'0';
        // cout <<ww<<endl;
        v[ww]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (v[i] > 1)
        {
            nu.insert(n);
            return false;
        }
    }
    u.insert(n);
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long i = 1;
        while (to_string(i).length()<=10)
        {
            long q = i * n;
            // printf("lol %ld\n", q);
            if (to_string(q).length() > 10)
            {
                // printf("oten: %ld\n",q);
                break;
            }
            if (isuniq(q) && isuniq(i))
            {
                // printf("%ld is unique\n", q);
                printf("%ld / %ld = %ld\n", q, i, n);
            }
            i++;
        }
        if(t) cout <<endl;
    }
}