#pragma once

#include <iostream>
#include <vector>
#include "CStructure.h"

using namespace std;

template<class T>
class Stack : public CStructure<T>
{
	public:
		void push(T n) override
    {
	    this->arr.push_back(n);
    }
    
		T pop() override
    {
	    T res = this->arr.back();
	    this->arr.erase(arr.end()-1);

	    return res;
    }
};
