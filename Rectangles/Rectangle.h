#pragma once
//rectangles.h
#include <iostream>

using namespace std;

class Rectangle
{
	public:
		Rectangle(double x1, double y1, double x2, double y2);
		//static bool isIntersected(Rectangle r1, Rectangle r2);
		bool isIntersected(Rectangle other);

	private:
		double xLeft, xRight, yLeft, yRight;
};