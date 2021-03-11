#include <iostream>
#include <vector>
#include <string>

using namespace std;

int mod(int a)
{
    if(a < 0)
        return -a;
    return a;
}

void    filed(int w, int h, char backk, vector <vector<char> > &arr)
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


void    e_cir(int x_c, int y_c, char sim_c, vector<vector<char> > &arr,int rad)
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

/*void    cir(int x_c, int y_c, char sim_c, vector<vector<char> > &arr,int rad)
{
    e_cir(x_c, y_c, sim_c, arr, rad);

}*/

int     main()
{
    int w, h, x_c, y_c, rad;
    char backk, sim_c, act;
    cin >> w >> h >> backk >> act;
    vector <vector<char> > arr;
    filed(w, h, backk, arr);
    if(act == 'c')
    {
    cin >> x_c >> y_c >> sim_c >> rad;
    e_cir(x_c, y_c, sim_c, arr, rad);
    }
    if(act == 'L')
    {
        int x1, y1, x2, y2;
        char b_ch2;
        cin >> x1 >> y1 >> x2 >> y2 >> b_ch2;
        line(arr, x1, x2, x2, y2, b_ch2);
    }
    for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++)
            {
                cout << arr[i][j] << " ";
            }
        cout << endl;
    }
}
