#include "base.h"

bool errorCheck(int kol)// checks amount of arguments
{
    if(kol > 2)
    {
        cout << "Error: to many arguments";
        return false;
    }
    else if (kol == 1)
    {
        cout << "Error: to few argumentss";
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
	vector <vector <char> > vec;
	filed(toInt(split(commands[0]) [2]), toInt(split(commands[0]) [1]), toChar(split(commands[0])[2]), vec);
    execute(commands[1], vec);

    return 0;
}
