#include <bits/stdc++.h>
using namespace std;

unordered_set<long> nra;
unordered_set<long> ra;

long ira(long n)
{
    while (1)
    {
        if(nra.find(n)!= nra.end()){
            n++;continue;
        }
        if(ra.find(n)!=ra.end()){
            return n;
        }
        string s = to_string(n);
        int st[s.length()] = {0};
        int ss[10] = {0};
        bool isuniq = true;
        for (int i = 0; i < s.length(); i++)
        {
            int d = int(s[i]) - '0';
            ss[d]++;
            if (ss[d] > 1)
                isuniq = false;
        }
        if (!isuniq)
        {
            nra.insert(n);
            n++;
            continue;
        }
        int i = 0;
        while (st[i] != 1)
        {
            // printf("passed %c\n",s[i]);
            st[i]++;
            int dig = int(s[i]) - '0';
            i = (i + dig) % s.length();
        }
        // printf("exited at %c\n",s[i]);
        bool pa = true;
        for (auto &i : st)
        {
            if (i == 0)
                pa = false;
        }
        if (i == 0 && pa){
            ra.insert(n);
            return n;
        }
        nra.insert(n);
        n++;
    }
}

int main()
{
    long n;
    int cc = 1;
    while (cin >> n)
    {
        if (n == 0)
            break;
        printf("Case %d: %ld\n",cc,ira(n));
        cc++;
    }
}