#include "base.h"

void line(vector<vector<char> > &arr, int x1, int y1, int x2, int y2, char b_ch2)
{
    int a, b, flag;
    a = y2 - y1;
    b = x1 - x2;
    if (mod(a) > mod(b))
        flag = 1;
    else
        flag = -1;
    int flag1, flag2;
        if (a < 0)
        flag1 = -1;
    else
        flag1 = 1;
    if (b < 0)
        flag2 = -1;
    else
        flag2 = 1;
    int check1 = 0;
    arr[y1][x1] = b_ch2;
    int x = x1, y = y1;
    if (flag == -1)
    {
        do
    {
    check1 += a * flag1;
        if (check1 > 0)
    {
        check1 -= b * flag2;
        y += flag1;
    }
    x -= flag2;
    arr[y][x] = b_ch2;
    } while (x != x2 || y != y2);
    }
    else
    {
    do
    {
    check1 += b * flag2;
    if (check1 > 0)
    {
    check1 -= a * flag1;
    x -= flag2;
    }
    y += flag1;
    arr[y][x] = b_ch2;
    } while (x != x2 || y != y2);
    }
}
