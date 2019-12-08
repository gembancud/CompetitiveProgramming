#include <bits/stdc++.h>
using namespace std;

int t, n;
vector<int> v;
// bool g=false;
set<vector<int>> st;
void rec(vector<int> out, int i)
{
    int tmpsum = accumulate(out.begin(), out.end(), 0);
    if (tmpsum == t)
    {
        st.insert(out);
        // g=true;
        // bool fst=false;
        // for(auto&i:out){
        //     (fst) ? printf("+"): fst=true;
        //     printf("%d",i);
        // }
        // printf("\n");
    }
    if (tmpsum > t)
        return;
    for (; i < n; i++)
    {
        out.push_back(v[i]);
        rec(out, i + 1);
        out.pop_back();
    }
}

bool mycmp(vector<int> a,vector<int> b){
    auto ait= a.begin();
    auto bit= b.begin();
    while(ait!=a.end() && bit!= b.end()){
            printf("%d vs %d\n",*ait,*bit);
        if(*ait>*bit) {
            return true;}
        else if(*ait<*bit) {
            return false;}
        ait++,bit++;
    }
    if(ait==a.end()) return true;
    else return false;
}

int main()
{
    while (cin >> t >> n)
    {
        if (t == 0 && n == 0)
            break;
        v.resize(n);
        for (auto &i : v)
            cin >> i;
        printf("Sums of %d:\n", t);
        rec(vector<int>(), 0);
        // if(!g) printf("NONE\n") ;
        vector<vector<int>> fst(st.begin(),st.end());
        reverse(fst.begin(),fst.end());
        if (st.size() == 0)
            printf("NONE\n");
        else
        {
            for (auto &v : fst)
            {
                bool fst = false;
                for (auto &i : v)
                {
                    (fst) ? printf("+") : fst = true;
                    printf("%d", i);
                }
                printf("\n");
            }
        }
        st.clear();
        // g = false;
    }
}