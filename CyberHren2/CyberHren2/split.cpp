#include "base.h"

vector <string> split(string a)
{
	vector <string> out;
	string joke;
	for(int i = 0; /*a[i] != '\0'|| a[i] != '\n'*/  i < len(a); i++)
	{
		if(a[i] == ' ')
		{
			out.push_back(joke);
			joke = "";	
		}
		else
		{
			joke += a[i];
		}
	}
	out.push_back(joke);
	return out;
}
