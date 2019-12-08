#include <bits/stdc++.h>
using namespace std;

int n;
int cc = 1;
vector<set<int>> g(20);
int fw[20][20];
int maxroute = INT_MIN;
int totroute = 0;
int x, y;


void rec(int idx, vector<int> p, map<int, int> t)
{
    if(fw[idx][n-1] == INT_MAX) return;
    if (idx == maxroute)
        return;
    if (idx + 1 == n)
    {
        totroute++;
        // printf("oten: ");
        for (auto &i : p)
            printf("%d ", i + 1);
        printf("%d\n", idx + 1);
        return;
    }

    // p.push_back(idx);

        for (auto &i : g[idx])
        {
            // printf("checking idx = %d ... i is %d\n",idx+1,i+1);
            if (!t.count(i))
            {
                // printf("passed here\n");
                vector<int> tp = p;
                tp.push_back(idx);
                t[idx]++;
                rec(i, tp, t);
            }
            // else printf("not passed\n");
        }
}

void fwset(){
    for(int k=0;k<20;k++){
        for(int i=0;i<20;i++){
            for(int j=0;j<20;j++){
                if(i==j) fw[i][j]=0;
                else if(fw[i][k]!=INT_MAX && fw[k][j]!= INT_MAX && fw[i][k]+fw[k][j]<fw[i][j])
                    fw[i][j]= fw[i][k]+fw[k][j];
            }
        }
    }
}

void printfw(){
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            (fw[i][j] != INT_MAX) ? printf("%d ",fw[i][j]): printf("x ");
        }
        cout<<endl;
    }
}

void setfwinf(){
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            fw[i][j]=INT_MAX;
        }
    }
}

int main()
{
    while (cin >> n)
    {
        setfwinf();
        // printfw();

        while (cin >> x >> y)
        {
            if (x == 0 && y == 0)
                break;
            maxroute = max(maxroute, x);
            maxroute = max(maxroute, y);
            g[x - 1].insert(y - 1);
            g[y - 1].insert(x - 1);
            fw[x-1][y-1]=1;
            fw[y-1][x-1]=1;
        }
        // printfw();
        fwset();
        // printfw();
        printf("CASE %d:\n", cc++);
        rec(0, vector<int>(), map<int, int>());
        printf("There are %d routes from the firestation to streetcorner %d.\n", totroute, n);
        totroute = 0;
        maxroute = INT_MIN;
        g.clear();
        g.resize(21);
    }
}