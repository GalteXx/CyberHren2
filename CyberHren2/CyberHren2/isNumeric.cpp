#include "base.h"

bool isNumeric(char a)
{
	if(a <= 57 && a >= 48 )
	{
		return true;
	}
	
	return false;
}
