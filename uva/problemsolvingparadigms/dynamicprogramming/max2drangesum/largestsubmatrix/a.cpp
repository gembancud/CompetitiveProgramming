#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> v;
vector<vector<int>> vi;
int ln;

void convv()
{
    vi.resize(ln, vector<int>(ln,0));
    for (int i = 0; i < ln; i++)
    {
        for (int j = 0; j < ln; j++)
        {
            if (v[i][j]=='1')   vi[i][j]=1;
            else vi[i][j]=0;
                if(i>0) vi[i][j]+= vi[i-1][j];
                if(j>0) vi[i][j]+= vi[i][j-1];
                if(i>0 && j>0) vi[i][j]-= vi[i-1][j-1];
        }
    }
}

void printv(){
    for(int i=0;i<ln;i++){
        for(int j=0;j<ln;j++){
            printf("%c ",v[i][j]);
        }
        printf("\n");
    }
}

void printvi(){
    for(int i=0;i<ln;i++){
        for(int j=0;j<ln;j++){
            printf("%d ",vi[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int t;
    cin >> t;
    bool fst=false;

    cin.ignore(0);
    while (t--)
    {
        (fst) ? printf("\n"): fst =true;
        string s;
        cin >> s;
        ln = s.length();
        v.push_back(vector<char>(s.begin(), s.end()));
        for (int i = 0; i < s.length() - 1; i++)
        {
            cin >> s;
            v.push_back(vector<char>(s.begin(), s.end()));
        }
        convv();
        // printv();
        // printf("\n");
        // printvi();
        int maxrect = 0;
        for(int i=0;i<ln;i++) for(int j=0;j<ln;j++)
            for(int k=i;k<ln;k++) for(int l=j;l<ln;l++){
                int subrect= vi[k][l];
                if(i>0) subrect -= vi[i-1][l];
                if(j>0) subrect -= vi[k][j-1];
                if(i>0 && j>0) subrect += vi[i-1][j-1];
                int size = (k-i+1)*(l-j+1);
                if(subrect == size) 
                maxrect = max(maxrect,subrect);
            }

        // printf("okay\n");
        printf("%d\n",maxrect);
        v.clear();
        vi.clear();
    }
}