#include <iostream>
#include <vector>
#include "CStructure.h"

using namespace std;

template<class T>
void CStructure::print()
{
	for (int i = 0; i < this->arr.size(); i++)
	{
		cout << this->arr[i] << " ";
	}
};
