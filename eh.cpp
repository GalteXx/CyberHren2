#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int execute()//executing a right command
{
    if()
}

int mod(int a)
{
    if(a < 0)
        return -a;
    return a;
}

void filed(int w, int h, char backk, vector <vector<char> > &arr)
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


int len(string str)//lent of a string
{
    int lent;
    for(lent = 0; str[lent] != '\0'; lent++)
    {
        lent;
    }
    return lent;
}
/*
char* toChar(string b)
{
    cout << "char1";
    char *a[len(b) + 1];
    for(int i = 0; b[i] != '\n'; i++)
        a[i] = b[i];
    cout << "char3";
    return *a;
}
*/


vector <string> read(char *path)//reading a file
{
    ifstream wrkspc;
    vector <string> out;
    wrkspc.open(path);
    string line;
    if(wrkspc.is_open())
    {
        while(getline(wrkspc, line))
        {
         out.push_back(line);
        }

        wrkspc.close();
    }
    else cout < "Error: can't open file";
    return out;

}


bool errorCheck(int kol)// checks amount of arguments
{
    if(kol > 2)
    {
        cout << "Error: to many arguments";
        return false;
    }
    else if (kol == 1)
    {
        cout << "Error: to few arguments";
        return false;
    }
    return true;
}
bool errorCheck2(string path)//check for .it
{
        if((path[len(path) - 3] != '.') || (path[len(path) - 2] != 'i') || (path[len(path)-1] != 't'))
        {
            cout << "Error: Operation file has an incorrect extension";
            return false;
        }
        return true;
}

int main(int argc, char *argv[])
{
    if(!errorCheck(argc))
        return 0;

    char* path = argv[1];

    if(!errorCheck2(path))
        return 0;


    vector <string> commands;
    commands = read(path);

    execute(commands[1]);

    return 0;
}
