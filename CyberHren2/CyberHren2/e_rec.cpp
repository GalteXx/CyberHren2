#include "base.h"

void e_rec(int x, int y, int w, int h, char b_c, vector<vector<char> >& arr)
{
    for (int i = x; i < x + w; i++) // ����
        arr[y][i] = b_c;
    for (int i = y + 1; i < y + h - 1; i++) // ����
        arr[i][x] = b_c;
    for (int i = y + 1; i < y + h - 1; i++) // �����
        arr[i][x + w - 1] = b_c;
    for (int i = x; i < x + w; i++) // ���
        arr[y + h - 1][i] = b_c;
}