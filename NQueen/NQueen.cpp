#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int board[8];

bool is_Safe(int q, int c)
{
    int j = 1;
    for (j = 1; j < q - 1; j++)
    {
        if ((board[j] == c) || abs(board[j] - c) == abs(j - q))
        {
            return false;
        }
    }
    return true;
}

bool NQueen(int q, int r)
{
    int i = 1;
    for (i = 1; i < r; i++)
    {
        if (is_Safe(q, i))
        {
            board[q] = i;
            if (q == r)
            {
                NQueen(q + 1, r);
            }
        }
    }
    return true;
}

int main()
{
    NQueen(0, 8);
    int c;
    for (c = 0; c < 8; c++)
    {
        printf(" | %d", board[c]);
    }

    return 0;
}