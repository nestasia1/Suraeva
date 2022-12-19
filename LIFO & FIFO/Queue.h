#pragma once

#include <iostream>
#include <vector>
#include "CStructure.h"

using namespace std;

class Queue : public CStructure
{
	public:
		void push(int n) override;
		int pop() override;
};
