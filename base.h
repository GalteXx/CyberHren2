#ifndef BASE_H
#define BASE_H

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
using namespace  std;

void filed(int w, int h, char backk, vector <vector <char> > &arr); // canvas
void execute(string command, vector<vector <char>> &arr);//executes a right command
void e_cir(int x_c, int y_c, char sim_c, int rad, vector<vector<char>> &arr);// ?empty? circle
int len(string str);//lenth of a string
int mod(int a); //abs
vector <string> read(char *path); //reading from a file
string* split(string a);//splits commnd in order to execute correctly
void e_rec(int w, int h, char b_c1);//empy rectangle
int toInt(string a)//converts to srting
bool isNumeric(char a)//checks if a char is NUM, basicly uselless as for now
void line(vector<vector<char>> &arr, int x1, int y1, int x2, int y2, char b_ch2)//draws a line (WCHT)

#endif
