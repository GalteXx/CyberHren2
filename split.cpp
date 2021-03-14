#include "base.h"

vector <string> split(string a)
{
	vector <string> out;
	int krueke = -1;
	for(int i = 0; a[i] != '\0'; i++)
	{
		string comm = "";
		for(int j = kruke + 1; a[j] != ' '; j++)
		{
			comm += a[j];
		}
		out.push_back(comm);
	}
	return out;
}
