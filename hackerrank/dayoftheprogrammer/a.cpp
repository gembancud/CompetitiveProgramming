#include <bits/stdc++.h>
using namespace std;

vector<int> months{31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31};
int main()
{
    int n;
    cin >> n;
    int tot = 0;
    if(n==1918){
        months[1]= 15;
    }
    if(n<1918){
    if (n % 4 == 0)
        months[1]=29;
    }
    if(n>1918){
        if(n%400==0 ||(n%4==0 && n%100!=0)) months[1] =29;
    }

    int day = 255;
    int mo;
    for (int i = 0; i < 12; i++)
    {
        if (day-tot<months[i])
        {
            mo= i+1;
            break;
        }
        tot+= months[i];

        // cout <<months[i]<< " ";
    }
    day-=tot;
    printf("%02d.%02d.%d\n",day,mo,n);
}