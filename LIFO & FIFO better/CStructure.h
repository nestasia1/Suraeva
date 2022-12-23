#pragma once

#include <iostream>
#include <vector>

using namespace std;

template<class T>
class CStructure
{
	protected:
		vector<T> arr;

	public:
		void print(void);
		virtual void push(T n) = 0;
		virtual T pop() = 0;
};
