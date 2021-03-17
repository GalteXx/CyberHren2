#include "base.h"

void rec(int x, int y, int w, int h, char b_c, vector<vector<char> >& arr)
{
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            if (i >= y && i < y + h && j < w + x && j >= x || j >= x && j < x + w && i < h + y && i >= y)
                arr[i][j] = b_c;
        }
    }
}
