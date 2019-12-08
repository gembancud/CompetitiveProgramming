#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        deque<int> v;
        for (auto i = n.begin(); i != n.end(); i++)
        {
            v.push_back(*i - '0');
        }
        // printf("size is %ld\n",v.size());
        // for (auto &i : v)
        //     cout << i;
        // cout << endl;
        if (v.size() == 1)
        {
            v = {*v.begin() + 1};
            if (v.front() == 10)
                v = {1, 1};
        }
        else if (v.size() % 2 == 1)
        {
            auto l = v.begin();
            auto r = v.end() - 1;
            bool carry = false;
            bool changed = false;
            while (l != r)
            {
                // printf("comparing %d:%d\n", *l, *r);
                if (*r + carry > *l)
                {
                    // printf("debug: even carry!\n");
                    changed = true;
                    carry = true;
                }
                else if (*r + carry < *l)
                {
                    carry = false;
                    changed = true;
                }
                *r = *l;
                l++;
                r--;
            }
            *l = *l + carry;
            // printf("changed? %d \n", changed);
            if (!changed)
            {
                *l = *l + 1;
                // printf("was changed\n");
            }
            if (*l > 9)
            {
                *l = *l % 10;
                r--;
                l++;
                carry = true;
                while (r != v.begin())
                {
                    *r = *r + carry;
                    if (*r > 9)
                    {
                        carry = true;
                        *r = *r % 10;
                    }
                    else
                        carry = false;
                    *l = *r;
                    r--;
                    l++;
                }
                *r = *r + carry;
                *l = *r;
                if (*r > 9)
                {
                    *r = 0;
                    carry = true;
                }
                else
                    carry = false;
                // printf("d:carry is %d\n", carry);
                if (carry)
                {
                    *v.begin() = 0;
                    v.push_front(1);
                    *(v.end() - 1) = 1;
                }
            }
        }
        else
        {
            auto l = v.begin();
            auto r = v.end() - 1;
            bool carry = false;
            bool changed = false;
            int sz = v.size() / 2 - 1;
            while (sz--)
            {
                if (*r + carry > *l)
                {
                    // printf("debug:odd carry\n");
                    carry = true;
                    changed = true;
                }
                else if (*r + carry < *l)
                {
                    carry = false;
                    changed = true;
                }
                *r = *l;
                l++;
                r--;
            }
            if (*l > *r + carry)
                *r = *l;
            else if (*l < *r + carry)
            {
                *l = *l + 1;
                *r = *l;
            }
            else if (!changed)
            {
                *l = *l + 1;
                *r = *r + 1;
            }

            if (*l == 10 || *r == 10)
            {
                // printf("d: l=%d,r=%d\n", *l, *r);
                *l = *l % 10;
                *r = *r % 10;
                // printf("d: l=%d,r=%d\n", *l, *r);
                l++;
                l++;
                r--;
                r--;
                carry = true;

                while (r != v.begin())
                {
                    *r = *r + carry;
                    // printf("r: %d\n",*r);
                    if (*r > 9)
                    {
                        carry = true;
                        *r = *r % 10;
                    }
                    else
                    {
                        carry = false;
                        // printf("d: carry falsee\n");
                    }
                    *l = *r;
                    r--;
                    l++;
                }
                *r = *r + carry;
                *l = *r;
                if (*r > 9)
                {
                    *r = 0;
                    carry = true;
                }
                else
                    carry = false;
                // printf("d:carry is %d\n", carry);
                if (carry)
                {
                    *v.begin() = 0;
                    v.push_front(1);
                    *(v.end() - 1) = 1;
                }
            }
        }
        for (auto &i : v)
        {
            cout << i;
        }
        cout << "\n";
    }
}