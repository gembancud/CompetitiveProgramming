#include <bits/stdc++.h>
using namespace std;

int a, b;
int row[8];
int lineCounter;
bool check(int r, int c)
{
    for (int prev = 0; prev < c; prev++)
    {
        if (row[prev] == r || (abs(row[prev] - r) == abs(prev - c)))
            return false;
    }
    return true;
}

void bktk(int c)
{
    if (c == 8 && row[b] == a)
    {
        printf("%2d      %d", ++lineCounter, row[0] + 1);
        for (int j = 1; j < 8; j++)
            printf(" %d", row[j] + 1);
        printf("\n");
    }
    for (int r = 0; r < 8; r++)
    {
        if (check(r, c))
        {
            row[c] = r;
            bktk(c + 1);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        a--;
        b--;
        memset(row, 0, sizeof row);
        lineCounter = 0;
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");
        bktk(0);
        if (t)
            printf("\n");
    }
}