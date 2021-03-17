#include "base.h"

bool isNumerr(string a)
{
	for (int i = 0; i < len(a); i++)
	{
		if (!isNumeric(a[i]))
			return false;
	}
	return true;
}