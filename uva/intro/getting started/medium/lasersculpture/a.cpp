#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, c;
    while (cin >> a >> c)
    {
        if (a == 0 && c == 0)
            break;
        vector<int> h(c);
        for (auto &i : h)
            cin >> i;
        int qq = 0;
        for (int i = a; i > 0; i--)
        {
            bool st=false;
            bool pause = false;
            bool stp = false;
            for (auto &j : h)
            {
                if(i>j&&!st){
                 qq++;
                //  printf("count @ %d , %d \n",i,j);    
                }
                
                if(i>j) st=true;
                else st= false;
                if(i<=j) stp=true;
                
            }
            // if(!stp) qq++; 
            // if (!stp)printf("not stoped\n");
        }
        cout << qq <<endl;
    }
}