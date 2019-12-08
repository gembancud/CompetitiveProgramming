#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if(s=="9") {
            cout << 11<<endl;
            continue;
        }
        int ln = s.size();
        deque<char> l(s.begin(), s.begin() + ceil(ln / 2.0));
        vector<char> r(s.begin() + ln / 2.0, s.end());
        // for (auto &i : l)
        //     cout << i;
        // cout << " ";
        reverse(l.begin(), l.end());
        // for (auto &i : r)
        //     cout << i;
        // cout << endl;

        auto ll = l.begin();
        auto rr = r.begin();
        bool add = true;
        for (int i = 0; i < l.size(); i++)
        {
            if (*rr < *ll)
            {
                add = false;
                break;
            }
            if (*rr > *ll)
            {
                add = true;
                break;
            }
            ll++;
            rr++;
        }
        deque<int> li;
        for (auto &i : l)
        {
            li.push_back(i - '0');
        }
        reverse(li.begin(), li.end());
        bool lnchanged=false;
        if (add)
        {
            int carry = 1;
            int count = li.size() - 1;
            for (; count >= 0; count--)
            {
                li[count] += carry;
                if (li[count] == 10)
                {
                    carry = 1;
                    li[count] = 0;
                }
                else
                    carry = 0;
            }
            if (carry)
            {
                li.push_front(1);
                lnchanged=true;
            }

            // printf("add:lend is %d\n", *lend);
            // bool carry = true;
            // while (count--)
            // {;
            //     *lend= *lend+carry;
            //     printf("d:new lend = %d\n",*lend);
            //     if (*lend ==10)
            //     {
            //         carry = true;
            //     }
            //     else
            //     {
            //         carry = false;
            //         break;
            //     }
            //     lend--;
            // }
            // if(carry) l.push_front(1);
            // printf("lend is now %c\n",*(l.end()-1));
        }
        for (auto &i : li)
        {
            cout << i;
        }
        cout << "";
        reverse(li.begin(), li.end());
        if(lnchanged) li.pop_front();
        for (int i = 0; i < li.size(); i++)
        {
            if ((ln) % 2 == 1 && i == 0)
                continue;
            cout << li[i];
        }
        cout << endl;
    }
}