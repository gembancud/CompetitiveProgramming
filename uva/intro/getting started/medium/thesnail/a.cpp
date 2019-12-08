#include <bits/stdc++.h>
using namespace std;

int main()
{
    double h, u, d, f;
    while (cin >> h >> u >> d >> f)
    {
        if (h == 0)
            break;
        double curr = 0;
        bool left = false;
        bool start = false;
        double prevclimb = u;
        double fatigueloss = prevclimb * (f / 100.0);
        int day = 0;
        for (int i = 0; i < 1000; i++)
        {
            day++;
            if (curr <= 0 && start)
            {
                left = false;
                break;
            }
            curr += prevclimb;
            if (curr > h)
            {
                left = true;
                break;
            }
            prevclimb -= fatigueloss;
            prevclimb = max(prevclimb,0.0);
            if (curr > 0)
            {
                start = true;
            }
            curr -= d;
            if (curr < 0 && start)
            {
                // cout <<"curr was negative\n";
                left = false;
                break;
            }
            // printf("day %d: %f added %f\n", day, curr, prevclimb);
        }
        (left) ? cout << "success on day " : cout << "failure on day ";
        cout << day << "\n";
    }
}