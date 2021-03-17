#include "base.h"

void execute(string a, vector<vector <char> > &arr)//executing a right command
{
	vector <string> comm = split(a);
    if (comm[0] == "R")//filled rect
        rec(toInt(comm[1]), toInt(comm[2]), toInt(comm[3]), toInt(comm[4]), toChar(comm[5]), arr);
    else if (comm[0] == "r")//empty rect
        e_rec(toInt(comm[1]), toInt(comm[2]), toInt(comm[3]), toInt(comm[4]), toChar(comm[5]), arr);
    //else if(comm[0] == "C")//filled circle
    
    else if (comm[0] == "c")//empty circle
        e_cir(toInt(comm[2]), toInt(comm[1]), toChar(comm[4]), toInt(comm[3]), arr);
    else if (comm[0] == "L")//line
        line(arr, toInt(comm[1]), toInt(comm[2]), toInt(comm[3]), toInt(comm[4]), toChar(comm[5]));
    else cout << "Incorrect command, please try again :/";
}
