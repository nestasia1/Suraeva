// task20.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//rectangles.h
#include <iostream>
#include "Rectangle.h"


Rectangle::Rectangle(double x1, double y1, double x2, double y2)
{
	xRight = max(x1, x2);
	xLeft = min(x1, x2);
	yRight = max(y1, y2);
	yLeft = min(y1, y2);
}

/*
bool Rectangle::isIntersected(Rectangle r1, Rectangle r2)
{
	if (r1.xRight < r2.xLeft || r2.xRight < r1.xLeft)
	{
		return false;
	}
	
	if (r1.yRight < r2.yLeft || r2.yRight < r1.yLeft)
	{
		return false;
	}
			
	return true;
}
*/

bool Rectangle::isIntersected(Rectangle other)
{
	if (this->xRight < other.xLeft || other.xRight < this->xLeft)
	{
		return false;
	}

	if (this->yRight < other.yLeft || other.yRight < this->yLeft)
	{
		return false;
	}

	return true;
}