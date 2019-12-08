#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    while (cin >> l)
    {
        if (l == 0)
            break;
        int x = 0;
        vector<string> inputs(l - 1);
        for (int i = 0; i < l - 1; i++)
        {
            cin >> inputs[i];
        }
        // reverse(inputs.begin(),inputs.end());
        for (auto &i : inputs)
        {
            // printf("using:%s \nprev x: %d ",i.c_str() ,x);
            if (i == "No")
                continue;
            if (i == "+z")
            {
                if (x == 0)
                    x = 1;
                else if (x == 1)
                    x = 2;
                else if (x == 2)
                    x = 3;
                else if (x == 3)
                    x = 0;
                else if (x == 4)
                    continue;
                else if (x == 5)
                    continue;
            }
            else if (i == "-z")
            {
                if (x == 0)
                    x = 3;
                else if (x == 1)
                    x = 0;
                else if (x == 2)
                    x = 1;
                else if (x == 3)
                    x = 2;
                else if (x == 4)
                    continue;
                else if (x == 5)
                    continue;
            }
            else if (i == "+y")
            {
                if (x == 0)
                    x = 4;
                else if (x == 1)
                    continue;
                else if (x == 2)
                    x = 5;
                else if (x == 3)
                    continue;
                else if (x == 4)
                    x = 2;
                else if (x == 5)
                    x = 0;
            }
            else if (i == "-y")
            {
                if (x == 0)
                    x = 5;
                else if (x == 1)
                    continue;
                else if (x == 2)
                    x = 4;
                else if (x == 3)
                    continue;
                else if (x == 4)
                    x = 0;
                else if (x == 5)
                    x = 2;
            }
            // printf("new x: %d \n",x);

        }

        if (x == 0)
            cout << "+x";
        else if (x == 1)
            cout << "+z";
        else if (x == 2)
            cout << "-x";
        else if (x == 3)
            cout << "-z";
        else if (x == 4)
            cout << "+y";
        else if (x == 5)
            cout << "-y";
        cout<<endl;
    }
}