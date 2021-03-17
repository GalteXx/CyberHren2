#include "base.h"

int toInt(string a)
{
	int out = 0;
	for(int i = 0; i < len(a); i++)
	{
		out += (a[i] - 48);
		a[i] *= 10;
	}
	return out/10;
}
