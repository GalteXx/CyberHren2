#include "base.h"

void e_rec(int x_r, int y_r, int w, int h, char b_c, vector<vector<char> >& arr)
{
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            if (i == y && j < w1 + x && j >= x || i == y + h1 - 1 && j < w1 + x && j >= x || j == x && i < h1 + y && i >= y || j == x + w1 - 1 && i < h1 + y && i >= y)
                arr[i][j] = b_c;
        }
    }
}