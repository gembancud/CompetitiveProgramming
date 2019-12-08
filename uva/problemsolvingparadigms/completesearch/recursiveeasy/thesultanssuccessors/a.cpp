#include <bits/stdc++.h>
using namespace std;

bool noadj(int q, int w, vector<vector<int>> board)
{
    //h
    for (int i = 0; i < 8; i++)
        if (board[q][i] && i != w)
            return false;
    //v
    for (int i = 0; i < 8; i++)
        if (board[i][w] && i != q)
            return false;
    //diag
    for (int i = 1; i <= 7; i++)
    {
        if (q + i < 8 && w + i < 8)
            if (board[q + i][w + i])
                return false;
        if (q + i < 8 && w - i >= 0)
            if (board[q + i][w - i])
                return false;
        if (q - i >= 0 && w + i < 8)
            if (board[q - i][w + i])
                return false;
        if (q - i >= 0 && w - i >= 0)
            if (board[q - i][w - i])
                return false;
    }
    return true;
}
vector<vector<vector<int>>> gboards;
void rec(int q, vector<vector<int>> board)
{
    if (q == 8)
    {
        gboards.push_back(board);
        // printf("added gboard\n");
        return;
    }
    for (int i = 0; i < 8; i++)
    {
        board[q][i] = 1;
        // printf("oten\n");
        if (noadj(q, i, board))
        {
            // printf("pos %d %d is good\n",q,i);
            rec(q + 1, board);
        }
        board[q][i] = 0;
    }
}

int main()
{
    int k;
    cin >> k;
    vector<vector<int>> board(8, vector<int>(8));
    rec(0, board);
    // cout << gboards.size()<<endl;
    while (k--)
    {
        vector<vector<int>> board(8, vector<int>(8));
        for (auto &i : board)
            for (auto &j : i)
                cin >> j;

        int mxscore=INT_MIN;
        for(auto&i:gboards){
            int tmpscore=0;
            for(int j=0;j<8;j++){
                for(int k=0;k<8;k++){
                    tmpscore += i[j][k]*board[j][k];
                }
            }
            // printf("the tmpscore is %d\n",tmpscore);
            mxscore = max(mxscore,tmpscore);
        }           
        printf("%5d\n",mxscore);
    }
}