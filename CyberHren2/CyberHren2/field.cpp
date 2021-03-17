#include "base.h"
void filed(int w, int h, char backk, vector <vector <char> > &arr)
{

    if (w > 300 || h > 300)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
        cout << "Canvas is bigger than 300";
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
        exit(0);
    }
    for(int i = 0; i < h; i++)
    {
            vector <char> temp;
            for(int j = 0; j < w; j++)
            {
                temp.push_back(backk);
            }
    arr.push_back(temp);
    }
}
