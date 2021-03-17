#include "base.h"

bool errorCheck(int kol)// checks amount of arguments
{
    if(kol > 2)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
        cout << "Error: to many arguments";
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
        return false;
    }
    else if (kol == 1)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
        cout << "Error: to few arguments";
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
        return false;
    }
    return true;
}

bool errorCheck2(string path)//check for .it
{
        if((path[len(path) - 3] != '.') || (path[len(path) - 2] != 'i') || (path[len(path)-1] != 't'))
        {
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
            cout << "Error: Operation file has an incorrect extension";
            SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
            return false;
        }
        return true;
}

bool errorCheck3(string a)
{
    string joke;
    for (int i = 0; i < len(a); i++)
    {
        if (a[i] == ' ')
        {
            joke = "";
        }
        else
        {
            joke += a[i];
        }
    }
    if (joke != "operation.it")
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
        cout << "Incorrect file name (only \"operation.it\" is accepted)";
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
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

    if (!errorCheck3(path))
        return 0;
    
    vector <string> commands;
    commands = read(path);
    
	vector <vector <char> > vec;
	filed(toInt(split(commands[0]) [0]), toInt(split(commands[0]) [1]), toChar(split(commands[0])[2]), vec);
    execute(commands[1], vec);
    return 0;
}
