#include <bits/stdc++.h>
using namespace std;

void proc(string &s, long n)
{
    while (s.length() < n)
    {
        string t = "0";
        t += s;
        s = t;
    }
}

map<string, long> m;

void cheat()
{
    m["00"]++;
    m["01"]++;
    m["81"]++;
    m["0000"]++;
    m["0001"]++;
    m["2025"]++;
    m["3025"]++;
    m["9801"]++;
    m["000000"]++;
    m["000001"]++;
    m["088209"]++;
    m["494209"]++;
    m["998001"]++;
    m["00000000"]++;
    m["00000001"]++;
    m["04941729"]++;
    m["07441984"]++;
    m["24502500"]++;
    m["25502500"]++;
    m["52881984"]++;
    m["60481729"]++;
    m["99980001"]++;
}

int main()
{
    cheat();
    int n;
    while (cin >> n)
    {
        for(auto&i: m){
            if(n==i.first.length()) cout<<i.first<<endl;
        }
        // long c = 0;
        // while (to_string(c).length() <= n)
        // {
        //     // if(c>32767) break;
        //     string cs = to_string(c);
        //     proc(cs, n);
        //     if (m.count(cs) == 0)
        //     {
        //         // printf("d: %s was zero?\n", cs.c_str());
        //         int hf = n / 2;
        //         string ls = cs.substr(0, n / 2);
        //         long l = stol(ls);
        //         string rs = cs.substr(n / 2, n);
        //         long r = stol(rs);
        //         if (pow(l + r, 2) == c)
        //         {
        //             m[cs]++;
        //             // printf("added %i to mem\n",c);
        //             cout << cs << endl;
        //         }
        //     }
        //     else
        //     {
        //         cout << cs << endl;
        //         printf("used mem\n");
        //     }

        //     c++;
        // }
        // m.clear();
        // printf("left with %li\n",c);
    }
}