#include "base.h"

bool errorCatchh(int a, int b, int aa, int bb, int x, int y)//for recs
{

    if ((a < 0 || b < 0 || aa < 0 || bb < 0) || (a >= x || b >= y || aa >= x || bb >= y) || (a >= aa || b >= bb)) //diff sections
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
        cout << "Components are incorrect";
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
        exit(0);
    }
    
    return true;
}
bool errorChth(int a, int b, int r, int x, int y)
{
    if (a + r >= x || b + r >= y)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
        cout << "Circle components are incorrect";
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
        exit(0);
    }
        
    return true;
}

void execute(string a, vector<vector <char> > &arr)//executing a right command
{
	vector <string> comm = split(a);
    if (comm[0] == "R")//filled rect
    {
        if(errorCatchh(toInt(comm[1]), toInt(comm[2]), toInt(comm[3]), toInt(comm[4]), arr[0].size(), arr.size()))
            rec(toInt(comm[1]), toInt(comm[2]), toInt(comm[3]), toInt(comm[4]), toChar(comm[5]), arr);
    }
        
    else if (comm[0] == "r")//empty rect
    {
        if(errorCatchh(toInt(comm[1]), toInt(comm[2]), toInt(comm[3]), toInt(comm[4]), arr[0].size(), arr.size()))
            e_rec(toInt(comm[1]), toInt(comm[2]), toInt(comm[3]), toInt(comm[4]), toChar(comm[5]), arr);
    }
    else if (comm[0] == "C")//filled circle
    {
        if(errorChth(toInt(comm[2]), toInt(comm[1]), toInt(comm[3]), arr[0].size(), arr.size()))
            cir(toInt(comm[2]), toInt(comm[1]), toChar(comm[4]), arr, toInt(comm[3]));
    }
    else if (comm[0] == "c")//empty circle
    {
        if(errorChth(toInt(comm[2]), toInt(comm[1]), toInt(comm[3]), arr[0].size(), arr.size()))
            e_cir(toInt(comm[2]), toInt(comm[1]), toChar(comm[4]), toInt(comm[3]), arr);
    }
    else if (comm[0] == "L")//line
    {
        if(errorCatchh(toInt(comm[1]), toInt(comm[2]), toInt(comm[3]), toInt(comm[4]), arr[0].size(), arr.size()))
            line(arr, toInt(comm[1]), toInt(comm[2]), toInt(comm[3]), toInt(comm[4]), toChar(comm[5]));
    }
        
    else {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
        cout << "Incorrect command, please try again :/";
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
        return;
    }
    vout(arr);
}