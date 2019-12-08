#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("t3", "r", stdin);
    freopen("t3o", "w", stdout);
    int t;
    cin >> t;
    cin.ignore();
    bool once = false;
    while (t--)
    {
        if (once)
            cout << "\n";
        once = true;
        string inz;
        getline(cin, inz);
        // cout << inz <<endl;
        auto p = inz.begin();
        vector<int> l;
        while (isdigit(*p))
        {
            l.push_back(*p - '0');
            p++;
        }
        // cout << *p <<endl;
        char op = *p;
        p++;
        vector<int> r;
        while (p != inz.end())
        {
            r.push_back(*p - '0');
            p++;
        }
        reverse(l.begin(), l.end());
        reverse(r.begin(), r.end());

        // for(auto&i:r){
        //     cout <<i<<" ";
        // }cout <<endl;

        auto t = l.begin();
        auto d = r.begin();
        int carry = 0;
        vector<int> res;
        deque<vector<int>> multiq;
        switch (op)
        {
        case '+':
            while (t != l.end() || d != r.end() || carry)
            {
                int a = (t != l.end()) ? *(t++) : 0;
                int b = (d != r.end()) ? *(d++) : 0;
                res.push_back((a + b + carry) % 10);
                carry = (a + b + carry) / 10;
            }
            break;
        case '-':
            while (t != l.end())
            {
                int a = (t != l.end()) ? *(t++) : 0;
                int b = (d != r.end()) ? *(d++) : 0;
                int td = a - b + carry;
                // cout <<"d: td is " <<td<<endl;
                if (td < 0)
                {
                    td += 10;
                    carry = -1;
                }
                else
                    carry = 0;
                res.push_back(td % 10);
            }
            break;
        case '*':
            int displace = 0;
            int totsize = l.size() + r.size();
            res.resize(totsize, 0);
            // cout << "will loop "<< r.size()<<endl;
            for (int j = 0; j < r.size(); j++)
            {
                vector<int> tv;
                int i = 0;
                carry = 0;
                while (t != l.end() || carry)
                {
                    int a = (t != l.end()) ? *(t++) : 0;
                    int b = *d;
                    res[i + displace] += (((a * b) + carry) % 10);
                    tv.push_back((((a * b) + carry) % 10));
                    // printf("d:iadded to result: %d\n",res[i+displace]);
                    carry = (((a * b) + carry) / 10);
                    // printf("multiplying %d and %d carry:%d sum: %d\n",a,b,carry,res[i+displace]);
                    i++;
                }
                while (tv.size() != 1 && *(tv.end() - 1) == 0)
                    tv.pop_back();

                reverse(tv.begin(), tv.end());

                multiq.push_back(tv);
                t = l.begin();
                d++;
                // printf("d is now %d \n",*d);
                displace++;
            }
            break;
        }
        while (res.size() != 1 && *(res.end() - 1) == 0)
            res.pop_back();
        reverse(res.begin(), res.end());

        // for (auto &i : res)
        // {
        //     cout << i << ".";
        // }
        // cout << endl;
        for (auto i = res.end()-1; i != res.begin() - 1; i--)
        {
            auto ti = *i;
            *i = (*i + carry) % 10;
            carry = (ti + carry) / 10;
            // printf("current i: %d with carry: %d\n", *i, carry);
        }
        if (carry)
        {
            reverse(res.begin(), res.end());
            res.push_back(carry);
            reverse(res.begin(), res.end());
        }
        // for (auto &i : res)
        // {
        //     cout << i << ".";
        // }
        // cout << endl;
        int resactualsize = 0;
        for (auto i : res)
        {
            resactualsize++;
        }

        int longest = l.size();
        longest = max(longest, int(r.size() + 1));
        int longestdash = longest;
        longest = max(longest, resactualsize);
        int longestnew = max(res.size(), r.size() + 1);
        int multifrontlength = multiq.front().size();
        int longest2nd = max(int(r.size() + 1), multifrontlength);
        // int multibacklength = multiq.back().size();
        // int longest3rd = max(int(res.size()),multibacklength);
        // printf("d: sizes.. l:%d .. r+1:%d .. res:%d\n", l.size(), r.size() + 1, resactualsize);

        reverse(l.begin(), l.end());
        reverse(r.begin(), r.end());

        for (int i = 0; i < longest - l.size(); i++)
        {
            cout << " ";
        }
        for (auto &i : l)
            cout << i;
        cout << endl;

        for (int i = 0; i < longest - r.size() - 1; i++)
        {
            cout << " ";
        }
        cout << op;
        for (auto &i : r)
            cout << i;
        cout << endl;

        if (op != '*') //not multi
        {
            for (int i = 0; i < longest - longestnew; i++)
            {
                cout << " ";
            }
            for (int i = 0; i < longestnew; i++)
            {
                cout << "-";
            }
        }
        else //multi
        {
            for (int i = 0; i < longest - longest2nd; i++)
            {
                cout << " ";
            }
            for (int i = 0; i < longest2nd; i++)
            {
                cout << "-";
            }
        }

        cout << endl;
        if (op == '*' && multiq.size() != 1)
        {
            int shift = 0;
            while (!multiq.empty())
            {
                auto x = multiq.front();
                // cout <<x.size()<<endl;
                multiq.pop_front();
                for (int i = 0; i < longest - x.size() - shift; i++)
                {
                    cout << " ";
                }
                // cout << op;
                for (auto &i : x)
                    cout << i;
                cout << endl;
                shift++;
            }
            for (int i = 0; i < longest - res.size(); i++)
            {
                cout << " ";
            }
            for (int i = 0; i < res.size(); i++)
            {
                cout << "-";
            }
            cout << endl;
            for (int i = 0; i < longest - res.size(); i++)
            {
                cout << " ";
            }
            for (auto &i : res)
                cout << i;
            cout << "\n";
        }
        else
        {
            for (int i = 0; i < longest - res.size(); i++)
            {
                cout << " ";
            }
            for (auto &i : res)
                cout << i;
            cout << "\n";
        }
    }
}