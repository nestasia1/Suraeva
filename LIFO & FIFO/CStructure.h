#pragma once

#include <iostream>
#include <vector>

using namespace std;

class CStructure
{
	protected:
		vector<int> arr;

	public:
		void print(void);
		virtual void push(int n) = 0;
		virtual int pop() = 0;
};
