#include <bits/stdc++.h>
using namespace std;

int t, n, k;
int glbmn = INT_MAX;
int glbsq;
set<int> v;
int mxmnstk;
set<set<int>> doneset;


int numsquare(set<int> tv)
{
    int num=0;
    for (int i = 0; i < n * n; i++)
    {
        int row = i / n;
        int col = i % n;

        int mnrc = n-max(row,col);

        for(int j=1;j<=mnrc;j++){
            //default: issquare
            bool issquare = true;
            for(int k=0;k<j;k++){
                //top
                if(binary_search(tv.begin(),tv.end(),1+row*7+col+k)) issquare= false;
                //bot
                if(binary_search(tv.begin(),tv.end(),1+j*7+row*7+col+k)) issquare= false;
                //left
                if(binary_search(tv.begin(),tv.end(),4+row*7+col+7*k)) issquare= false;
                //right
                if(binary_search(tv.begin(),tv.end(),4+j+row*7+col+7*k)) issquare= false;
            }
            if(issquare) num++;
        }
    }
    return num;
}

void mnstk(int i,int sq, set<int> tv)
{
    if(find(doneset.begin(),doneset.end(),tv)!=doneset.end()) return;
    printf("Inspecting ... ");
    for(auto&i:tv) printf(" %d",i);
    cout<<endl;

    if (numsquare(tv)==0){
        glbmn = min(glbmn, int(tv.size() - v.size()));
        printf("new min is %d\n",glbmn);
        doneset.insert(tv);
    }
    if (i == mxmnstk || sq > glbsq)
        return;
    mnstk(i + 1, sq, tv);
    tv.insert(i);
    mnstk(i + 1,sq+1,tv);
}


int main(){
    cin>>t;
    while (t--)
    {
        cin >> n;
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            v.insert(x);
        }
        mxmnstk = 2 * n * (n + 1);
        glbsq =numsquare(v);
        printf("glbsq is %d\n",glbsq);
        mnstk(0,0,v);
        cout <<glbmn <<endl;

        doneset.clear();
        v.clear();
        glbmn = INT_MAX;
    }
}