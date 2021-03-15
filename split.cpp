#include "base.h"

vector <string> split(string a)
{
	vector <string> out;
	string joke;
	for(int i = 0; a[i] != '\0'; i++)
	{
		if(a[i] == ' ')
			out.push_back(joke);
			joke = '';
		else
		{
			joke += a[i];
		}
	}
	return out;
}
