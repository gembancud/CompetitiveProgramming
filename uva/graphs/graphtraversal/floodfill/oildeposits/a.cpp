#include <bits/stdc++.h>
using namespace std;

int numdep = 0;

int movr[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int movc[] = {0, 1, 1, 1, 0, -1, -1, -1};
int r, c;
vector<vector<char>> g;

void ff(int q, int w)
{
    if(q<0 || w <0 || q==r || w == c) return;
    if (g[q][w] == '@')
    {
        g[q][w] = '*';
    }
    else
        return;

    for (int i = 0; i < 8; i++)
    {
        ff(q+movr[i],w+movc[i]);
    }
}

void flood()
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (g[i][j] == '@'){
                numdep++;
                ff(i, j);
            }
        }
    }
}



int main()
{
    while (cin >> r >> c)
    {
        if (r == 0 && c == 0)
            break;
        g.resize(r);
        for(int i=0;i<r;i++){
            string s;cin>>s;
            g[i] = vector<char>(s.begin(),s.end());
        }
        for(auto&i:g){
            for(auto&j:i){
                printf("%c ",j);
            }
            cout<<endl;
        }

        flood();
        printf("%d\n", numdep);
        numdep = 0;
        g.clear();
    }
}