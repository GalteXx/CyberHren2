#include "base.h"
void filed(int w, int h, char backk, vector <vector <char> > &arr)
{
    for(int i = 0; i < h; i++){
            vector <char> temp;
            for(int j = 0; j < w; j++)
            {
                temp.push_back(backk);
            }
    arr.push_back(temp);
    }
}
