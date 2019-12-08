#include <bits/stdc++.h>
using namespace std;

int main()
{

    int q;
    cin >> q;
    map<int, int> rows, cols;
    int moves = 0;
    while (q--)
    {
        int r, c;
        cin >> r >> c;
        if (!rows.count(r))
            moves++;
        else if (!cols.count(c))
            moves++;
        rows[r]++;
        cols[c]++;
    }
    moves = min(int(rows.size()),moves);
    moves = min(int(cols.size()),moves);
    cout << moves << endl;
}