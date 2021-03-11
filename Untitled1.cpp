#include <iostream>
#include <string>
#include <vector>
using namespace std;
void e_rec(int w, int h, char b_c1)
{
    int x, y, w1, h1;
    char b_c2;
    cin >> x >> y >> w1 >> h1 >> b_c2;
    char arr[w][h];
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            if (i == y && j < w1 + x && j >= x || i == y + h1 - 1 && j < w1 + x && j >= x || j == x && i < h1 + y && i >= y || j == x + w1 - 1 && i < h1 + y && i >= y)
                cout << b_c2 << " ";
            else
                cout << b_c1 << " ";
        }
        cout << endl;
    }
}

void rec(int w, int h, char b_c1)
{
    int x, y, w1, h1;
    char b_c2;
    cin >> x >> y >> w1 >> h1 >> b_c2;
    char arr[w][h];
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            if (i >= y && i < y + h1 && j < w1 + x && j >= x || j >= x && j < x + w1 && i < h1 + y && i >= y)
                cout << b_c2 << " ";
            else
                cout << b_c1 << " ";
        }
        cout << endl;
    }
}

int main()
{
    int w, h, x, y, w_x, y_x; //wight, hight
    char b_c1, b_c2, check; //background char
    cin >> w >> h >> b_c1;
    //field(w, h, b_c1);
    cin >> check;
    if (check == 'r')
        e_rec(w, h, b_c1);
    if (check == 'R')
        rec(w, h, b_c1);
}
