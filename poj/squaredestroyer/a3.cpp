// #include <bits/stdc++.h>
#include <set>
#include <vector>
#include <algorithm>
#include <iostream>
#include <limits.h>
#include <map>
#include <stdio.h>
using namespace std;

int t, n, k,x;
int glbmn = INT_MAX;
int glbsq;
map<int,int> v;
int mxmnstk;
map<map<int,int>,int> doneset;
map<int,int> hotsticks;
vector<pair<int,int> > vhotsticks;
vector<pair<int,int> > hotpoints;


int numsquare(map<int,int> tv)
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
                if(tv.count(1+row*7+col+k)) issquare= false;
                //bot
                if(tv.count(1+j*7+row*7+col+k)) issquare= false;
                //left
                if(tv.count(4+row*7+col+7*k)) issquare= false;
                //right
                if(tv.count(4+j+row*7+col+7*k)) issquare= false;
                if(!issquare) break;
            }
            if(issquare) {
                num++;
                hotpoints.push_back(make_pair(i,j));
                for(int m = 0; m<j;m++){
                    hotsticks[1+row*7+col+k]++;
                    hotsticks[1+j*7+row*7+col+k]++;
                    hotsticks[4+row*7+col+7*k]++;
                    hotsticks[4+j+row*7+col+7*k]++;
                }    
            }
            
        }
    }
    return num;
}

// bool hassquare(map<int,int> tv)
// {
//     for (int i = 0; i < n * n; i++)
//     {
//         int row = i / n;
//         int col = i % n;

//         int mnrc = n-max(row,col);

//         for(int j=1;j<=mnrc;j++){
//             //default: issquare
//             bool issquare = true;
//             for(int k=0;k<j;k++){
//                 //top
//                 if(tv.count(1+row*7+col+k)) issquare= false;
//                 //bot
//                 if(tv.count(1+j*7+row*7+col+k)) issquare= false;
//                 //left
//                 if(tv.count(4+row*7+col+7*k)) issquare= false;
//                 //right
//                 if(tv.count(4+j+row*7+col+7*k)) issquare= false;
//                 if(!issquare) break;
//             }
//             if(issquare) return true;
//         }
//     }
//     return false;
// }

bool hassquare2(map<int,int> tv){
    for (vector<pair<int,int> >::iterator i = hotpoints.begin();i!=hotpoints.end();i++)
    {
        int row = i->first / n;
        int col = i->first % n;

        int mnrc = n-max(row,col);
            bool issquare = true;
            for(int k=0;k<i->second;k++){
                //top
                if(tv.count(1+row*7+col+k)) issquare= false;
                //bot
                if(tv.count(1+i->second*7+row*7+col+k)) issquare= false;
                //left
                if(tv.count(4+row*7+col+7*k)) issquare= false;
                //right
                if(tv.count(4+i->second+row*7+col+7*k)) issquare= false;
                if(!issquare) break;
            }
            if(issquare) return true;
    }
    return false;
}

void mnstk(int i,int sq, map<int,int> tv)
{
    if (i > mxmnstk || sq > glbsq)
        return;
    if(doneset.count(tv)) return;
    // printf("Inspecting ... ");
    // for(auto&i:tv) printf(" %d",i);
    // cout<<endl;

    if (!hassquare2(tv)){
        glbmn = min(glbmn, int(tv.size() - v.size()));
        // printf("new min is %d\n",glbmn);
        doneset[tv]++;
    }
    mnstk(i + 1, sq, tv);
    tv[vhotsticks[i].first];
    mnstk(i + 1,sq+1,tv);
}


int main(){
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d",&n,&k);
        for (int i = 0; i < k; i++)
        {
            scanf("%d",&x);
            v[x]++;
        }
        glbsq =numsquare(v);
        mxmnstk = hotsticks.size();
        vhotsticks.resize(mxmnstk);
        copy(hotsticks.begin(),hotsticks.end(),vhotsticks.begin());
        // printf("glbsq is %d\n",glbsq);
        mnstk(0,0,v);
        printf("%d\n", glbmn);

        doneset.clear();
        v.clear();
        glbmn = INT_MAX;
        hotsticks.clear();
        vhotsticks.clear();
        hotpoints.clear();
    }
}