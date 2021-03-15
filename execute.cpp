#include "base.h"

void execute(string a, vector<vector <char>> &arr)//executing a right command
{
	vector <string> comm = split(a);
    if(comm[0] == "R")//filled rect
    	//nothing to use so far
    else if(comm[0] == "r")//empty rect
    	//and there as well
    else if(comm[0] == "C")//filled circle
    	
    else if(comm[0] == "c")//empty circle
    	e_cir(toInt(comm[1]), toInt(comm[2]), comm[4], toInt(comm[3]), arr);
    else if(comm[0] == "L")//line
    	line(arr, toInt(comm[1]), toInt(comm[2]), toInt(comm[3]), toInt(comm[4]), comm[5]);
}
