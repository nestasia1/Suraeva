#include <iostream>
#include <fstream>
#include "Rectangle.h"

using namespace std;

int main()
{
	fstream data;
	data.open("data.txt");

	double a[4];
	for (int i = 0; i < 4; i++)
	{
		data >> a[i];
	}
	Rectangle r1(a[0], a[1], a[2], a[3]);

	double b[4];
	for (int i = 0; i < 4; i++)
	{
		data >> b[i];
	}
	Rectangle r2(b[0], b[1], b[2], b[3]);

	//cout << Rectangle::isIntersected(r1, r2);
	cout << r1.isIntersected(r2);

	data.close();
	return 0;
}
