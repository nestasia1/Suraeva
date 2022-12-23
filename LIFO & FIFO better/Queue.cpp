#include <iostream>
#include <vector>
#include "Queue.h"

using namespace std;

template<class T>
void Queue::push(T n)
{
	this->arr.push_back(n);
}

T Queue::pop()
{
	T res = this->arr.front();
	this->arr.erase(arr.begin());

	return res;
}
