#include <iostream>
#include <vector>
#include "CStructure.h"

using namespace std;

void CStructure::print()
{
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
};
