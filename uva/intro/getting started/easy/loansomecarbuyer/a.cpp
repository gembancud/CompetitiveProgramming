#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, h, w, p, a;
    int mb = INT_MAX;
    while (scanf("%d %d %d %d", &n, &b, &h, &w) != EOF)
    {
        // cin >> n >> b >> h >> w;
        for (int i = 0; i < h; i++)
        {
            cin >> p;
            for (int j = 0; j < w; j++)
            {
                cin >> a;
                if (a < n)
                    continue;
                int tmb = n * p;
                if (tmb <= b)
                    mb = min(tmb, mb);
            }
        }
        (mb <= b) ? cout << mb : cout << "stay home";
        cout << "\n";
        mb = INT_MAX;
    }
}