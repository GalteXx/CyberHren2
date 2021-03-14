#ifndef BASE_H
#define BASE_H

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
using namespace  std;

void filed(int w, int h, char backk, vector <vector <char> > &arr); // field?
void execute(string command);//executes a right command
void e_cir(int x_c, int y_c, char sim_c, vector<vector<char> > &arr,int rad);// ?empty? circle
int len(string str);//lenth of a string
int mod(int a); //abs
vector <string> read(char *path); //reading from a file
string* split(string a)//splits commnd in order to execute correctly


#endif
