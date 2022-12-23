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
		void print(void)
		{
			for (int i = 0; i < this->arr.size(); i++)
			{
				cout << this->arr[i] << " ";
			}
		}
		virtual void push(T n) = 0;
		virtual T pop() = 0;
};
