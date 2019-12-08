#include <bits/stdc++.h>
using namespace std;

//! NOT SOLVED
int aa, bb, cc, dd, ee, ff, gg, hh;
int cnt = 1;
int mn = INT_MAX;
int insum;
int row[8];
int inrow[8];
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
  if (c == 8)
  {
    int sum=0;
    printf("comparing %d %d %d %d %d %d %d %d to %d %d %d %d %d %d %d %d ",row[0]+1,row[1]+1,row[2]+1,row[3]+1,row[4]+1,row[5]+1,row[6]+1,row[7]+1,aa,bb,cc,dd,ee,ff,gg,hh);
    for(int i=0;i<8;i++){
      sum += abs(row[i]+1-inrow[i]);
    }
    printf(" its %d\n",sum);
    mn = min(mn,abs(sum));
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
  while (cin >> aa >>bb >> cc >> dd >> ee >> ff >> gg >> hh)
  {
    insum = aa+bb+cc+dd+ee+ff+gg+hh;
    inrow[0]=aa;
    inrow[1]=bb;
    inrow[2]=cc;
    inrow[3]=dd;
    inrow[4]=ee;
    inrow[5]=ff;
    inrow[6]=gg;
    inrow[7]=hh;
    mn = INT_MAX;
    memset(row, 0, sizeof row);
    bktk(0);
    printf("Case %d: %d\n",cnt++, mn);
  }
}