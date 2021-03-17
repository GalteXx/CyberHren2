#include "base.h"
void rec(int x, int y, int w, int h, char b_c, vector<vector<char> >& arr)
{
    for (int i = x; i < x + w; i++)
    {
        for (int j = y; j < y + h; j++)
        {
				arr[j][i] = b_c;
        }
    }
}
