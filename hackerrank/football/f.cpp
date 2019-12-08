#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n, 0);
        vector<int> a(n, 0);
        vector<int> b(n, 0);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            p[i] = max(a[i]*20-b[i]*10,0);
        }
        int m=0;
        for(auto i: p){
            m = max(m,i);
        }
        cout << m << endl;
    }
}