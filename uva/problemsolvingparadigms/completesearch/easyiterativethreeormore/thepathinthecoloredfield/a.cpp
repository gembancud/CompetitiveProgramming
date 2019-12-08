#include <bits/stdc++.h>
using namespace std;

int bfs(string f[],int i,int j,int m){
    int mn = INT_MAX;
    for(int q=0;q<m;q++){
        for(int w=0;w<m;w++){
            if(f[q][w]=='3')
                mn = min(mn,abs(i-q)+abs(w-j));
        }
    }
    return mn;
}

int main()
{
    int m;
    while (cin >> m)
    {
        string f[m];
        for (auto &i : f)
            cin >> i;

        int mn = INT_MIN;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(f[i][j]=='1') 
                    mn = max(mn, bfs(f,i,j,m)); 
            }
        }
        cout << mn << endl;
    }
}