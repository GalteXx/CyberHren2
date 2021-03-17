#include "base.h"

void e_rec(int x, int y, int w, int h, char b_c, vector<vector<char> >& arr)
{
    for (int i = x; i < x + w; i++) // верх
        arr[y][i] = b_c;
    for (int i = y + 1; i < y + h - 1; i++) // лево
        arr[i][x] = b_c;
    for (int i = y + 1; i < y + h - 1; i++) // право
        arr[i][x + w - 1] = b_c;
    for (int i = x; i < x + w; i++) // низ
        arr[y + h - 1][i] = b_c;
}