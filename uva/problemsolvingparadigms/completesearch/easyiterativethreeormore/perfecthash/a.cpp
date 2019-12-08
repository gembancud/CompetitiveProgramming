#include <bits/stdc++.h>
using namespace std;

int qq(char c)
{
    switch (c)
    {
    case 'a':
        return 1;
    case 'b':
        return 2;
    case 'c':
        return 3;
    case 'd':
        return 4;
    case 'e':
        return 5;
    case 'f':
        return 6;
    case 'g':
        return 7;
    case 'h':
        return 8;
    case 'i':
        return 9;
    case 'j':
        return 10;
    case 'k':
        return 11;
    case 'l':
        return 12;
    case 'm':
        return 13;
    case 'n':
        return 14;
    case 'o':
        return 15;
    case 'p':
        return 16;
    case 'q':
        return 17;
    case 'r':
        return 18;
    case 's':
        return 19;
    case 't':
        return 20;
    case 'u':
        return 21;
    case 'v':
        return 22;
    case 'w':
        return 23;
    case 'x':
        return 24;
    case 'y':
        return 25;
    case 'z':
        return 26;
    }
}

vector<int> split(string s)
{
    vector<int> v;
    string tmp = "";
    auto it = s.begin();
    while (it != s.end())
    {
        if (*it == ' ')
        {
            // printf("parsing %s\n", tmp.c_str());
            if (tmp.length() != 0)
            {
                int tot = 0;
                for (int i = 0; i < tmp.length(); i++)
                {
                    tot += qq(tmp[i]) * pow(32, tmp.length() - i - 1);
                }
                // printf("iyot: %d\n", tot);
                v.push_back(tot);
                tmp = "";
            }
        }
        else
        {
            tmp = tmp + *it;
        }
        it++;
    }
    // printf("parsing %s\n", tmp.c_str());
    if (tmp.length() != 0)
    {
        int tot = 0;
        for (int i = 0; i < tmp.length(); i++)
        {
            tot += qq(tmp[i]) * pow(32, tmp.length() - i - 1);
        }
        // printf("iyot: %d\n", tot);
        v.push_back(tot);
    }
    return v;
}
int main()
{
    string st;
    bool fst = false;
    while (getline(cin, st))
    {
        // if (fst)
        //     cout << endl;
        // fst = true;
        vector<int> v = split(st);
        sort(v.begin(), v.end());
        // for (auto &i : v)
        //     printf("%d ", i);
        // cout << endl;
        int fin;
        int curr = 0;
        while (1)
        {
            bool isg = true;
            // printf("checking .. %d\n", curr);
            for (int i = 0; i < v.size(); i++)
            {
                for (int j = i + 1; j < v.size(); j++)
                {
                    int a = (curr / v[i]) % v.size();
                    int b = (curr / v[j]) % v.size();
                    if (a == b)
                    {
                        isg = false;
                        curr = min(floor(curr / v[i] + 1) * v[i], floor(curr / v[j] + 1) * v[j]);
                        // curr = min(floor((curr / v[i]) + 1) * v[i], ((curr / v[j]) + 1) * v[j]);
                        break;
                    }
                }
                if (!isg)
                    break;
            }
            if (isg)
            {
                fin = curr;
                break;
            }
            // curr++;
        }
        printf("%s\n%d\n\n", st.c_str(), fin);
    }
}