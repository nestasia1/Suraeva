#pragma once

#include <iostream>
#include <vector>
#include "CStructure.h"

using namespace std;

template<class T>
class Queue: public CStructure<T>
{
	public:
		void push(T n) override;
		T pop() override;
};
