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
    else cout << "Error: can't open file";
    return out;

}
