#pragma once

#include <iostream>
#include <vector>
#include "CStructure.h"

using namespace std;

template<class T>
class Queue: public CStructure<T>
{
	public:
		void push(T n) override
		{
			this->arr.push_back(n);
		}
		
		T pop() override
		{
			T res = this->arr.front();
			this->arr.erase(arr.begin());

			return res;
		}
};
