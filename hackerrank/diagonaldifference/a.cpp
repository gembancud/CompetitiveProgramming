#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ld=0;
    int rd=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            if(i==j) ld+=x;
            if(i+j+1==n) rd+=x;
        }
    }
    cout << ld << " " <<rd <<endl; 
    int fin = abs(ld-rd);
    cout << fin << endl;
    
}