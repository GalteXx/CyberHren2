#include "base.h"

int toInt(string str)
{
    int figure = 0;
    int k = 1;
    for (int i = 1; i < len(str); i++)
    {
        k = k * 10;
    }

    for (int i = 0; i < len(str); i++)
    {
        char number = str[i] - 48;
        figure = figure + number * k;
        k = k / 10;
    }
    return(figure);
}