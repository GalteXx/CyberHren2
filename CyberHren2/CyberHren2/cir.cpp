#include "base.h"

void  cir(int x_c, int y_c, char sim_c, vector<vector<char> >& arr, int rad)
{
    int kol = 0;
    bool fl = 1;
    e_cir(x_c, y_c, sim_c, rad , arr);
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 1; j < arr[0].size(); j++)
        {
            for (int k = 0; k < arr[0].size(); k++)
            {
                if (arr[i][k] == sim_c)
                    kol++;
            }
            if (arr[i][j - 1] == sim_c && arr[i][j] == arr[0][0] && kol % 2 == 0)
            {
                while (arr[i][j] == arr[0][0] && fl == 1)
                {
                    arr[i][j] = sim_c;
                    j++;
                }
                fl = 0;
            }
            kol = 0;
        }
        kol = 0;
        fl = 1;
    }
}
