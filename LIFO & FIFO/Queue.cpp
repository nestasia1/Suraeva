#include <iostream>
#include <vector>
#include "Queue.h"

using namespace std;

void Queue::push(int n)
{
	arr.push_back(n);
}

int Queue::pop()
{
	int res = arr.front();
	arr.erase(arr.begin());

	return res;
}
