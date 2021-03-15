#include "base.h"
void e_cir(int x_c, int y_c, char sim_c, int rad, vector<vector<char> > &arr)
{
   int x = 0;
   int y = rad;
   int delta = 1 - 2 * rad;
   int error = 0;
   while (y >= 0)
   {
       arr[x_c+x][y_c+y] = sim_c;
       arr[x_c+x][y_c-y] = sim_c;
       arr[x_c-x][y_c+y] = sim_c;
       arr[x_c-x][y_c-y] = sim_c;
       error = 2 * (delta + y) - 1;
       if ((delta < 0) && (error <= 0))
       {
           delta += 2 * ++x + 1;
           continue;
       }
       if ((delta > 0) && (error > 0))
       {
           delta -= 2 * --y + 1;
           continue;
       }
       delta += 2 * (++x - --y);
   }
}
