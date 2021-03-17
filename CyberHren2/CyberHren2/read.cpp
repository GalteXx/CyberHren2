#include "base.h"

vector <string> read(char *path)
{
    ifstream wrkspc;
    vector <string> out;
    wrkspc.open(path);
    string line;
    if(wrkspc.is_open())
    {
        while(std::getline(wrkspc, line))
        {
         out.push_back(line);
        }
        
        wrkspc.close();
    }
    else
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
        cout << "Error: can't open file";
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
    }
    
    return out;

}
