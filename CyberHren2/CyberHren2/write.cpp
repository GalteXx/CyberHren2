#include "base.h"

void write(vector <vector <char> >& arr)
{
	ofstream was{ "result_operation_file.it" };

	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr[i].size(); j++)
			was << arr[i][j] << " ";

		was << "\n";
	}
}