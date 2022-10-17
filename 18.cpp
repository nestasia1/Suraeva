#include <iostream>

using namespace std;

void swapper1(int *a, int *b) //передаём указатели на значения
{
	int helper = *a; //разыменовываем и передаём значение
	*a = *b;
	*b = helper;
}

int main()
{
	int a, b;

	cin >> a >> b;

	swapper1(&a, &b); //передаём адреса значений

	cout << a << b;
}
