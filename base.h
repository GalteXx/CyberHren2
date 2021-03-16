#ifndef BASE_H
#define BASE_H

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
using namespace  std;

void filed(int w, int h, char backk, vector <vector <char> > &arr); // canvas
void execute(string command, vector<vector <char> > &arr);//executes right command
void e_cir(int x_c, int y_c, char sim_c, int rad, vector<vector<char> > &arr);// ?empty? circle
int len(string str);//length of a string
int mod(int a); //abs
vector <string> read(char *path); //reading from a file
vector <string> split(string a);//splits command in order to execute correctly
void e_rec(int x_r, int y_r, int w, int h, char b_c, vector<vector<char> >& arr);//empty rectangle
void rec(int x_r, int y_r, int w, int h, char b_c, vector<vector<char> >& arr);//filled rectangle
int toInt(string a);//converts to srting
bool isNumeric(char a);//checks if a char is NUM, basically useless as for now
void line(vector<vector<char> > &arr, int x1, int y1, int x2, int y2, char b_ch2);//draws a line (WCHT)
char toChar(string a);//1 string typed letter to char... why?

#endif
