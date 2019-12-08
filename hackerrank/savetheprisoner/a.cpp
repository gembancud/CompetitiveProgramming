#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, s;
        cin >> n >> m >> s;
        int x = m+s-1;
        if(x>n){
            if(x%n==0) cout << n <<endl;
            else cout <<x%n<< endl;
        }
        else cout << x<<endl;
    }
}