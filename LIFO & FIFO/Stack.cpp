#include <iostream>
#include <vector>
#include "Stack.h"

using namespace std;

void Stack::push(int n)
{
	arr.push_back(n);
}

int Stack::pop()
{
	int res = arr.back();
	arr.erase(arr.end()-1);

	return res;
}
