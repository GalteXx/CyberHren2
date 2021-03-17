#include "base.h"

void e_rec(int x, int y, int w, int h, char b_c, vector<vector<char> >& arr)
{
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            if (i == y && j < w + x && j >= x || i == y + h - 1 && j < w + x && j >= x || j == x && i < h + y && i >= y || j == x + w - 1 && i < h + y && i >= y)
                arr[i][j] = b_c;
        }
    }
}