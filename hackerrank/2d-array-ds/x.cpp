#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> m;
int hg(const int &x, const int &y)
{
    // cout << "adding " << m[x][y] << " " << m[x - 1][y - 1] << " " << m[x - 1][y] << " " << m[x - 1][y + 1] << " " << m[x + 1][y] << " " << m[x + 1][y - 1] << " " << m[x + 1][y] << " " << m[x + 1][y + 1] << endl;
    int sum = m[x][y] + m[x-1][y-1]+ m[x-1][y] + m[x-1][y+1] + m[x+1][y-1]+m[x+1][y]+m[x+1][y+1];
    // cout << "sum: " << sum << endl;
    return sum;
}
void printmap()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << m[i][j] << "   ";
        }
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    m.resize(6, vector<int>(6, 0));
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> m[i][j];
        }
    }
    int f = 0;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            // cout << m[i][j] <<" ";
            f = max(hg(i, j), f);
            // cout << hg(i,j) << " ";
        }
    }
    // printmap();
    cout << f << endl;
}