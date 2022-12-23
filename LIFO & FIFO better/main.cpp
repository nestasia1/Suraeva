#include <iostream>
#include <vector>
#include "Stack.h"
#include "Queue.h"
#include "CStructure.h"

using namespace std;

void print1(CStructure<int> &CStructure)
{
	int n = 0;
	cout << "How much objects will be in the structure: ";
	cin >> n;
	cout << "Enter smth" << endl;
	for (int i = 0; i < n; i++)
	{
		int val = 0;
		cin >> val;
		CStructure.push(val);
	}
	cout << endl;

	CStructure.print();
	cout << "smth: ";
	//for (int i = 0; i < n; i++)
	//{
		cout << CStructure.pop() << endl;
		CStructure.print();
	//}
	cout << endl;
}

template<class T>
void analize(CStructure<T> &CStructure)
{
	CStructure.push(0);
	CStructure.push(1);

	if (CStructure.pop() == 1)
	{
		cout << "stack";
	}
	else
	{
		cout << "queue";
	}
	cout << endl;
}

int main()
{

	Stack<int> q;
	print1(q);
	analize(q);
}
