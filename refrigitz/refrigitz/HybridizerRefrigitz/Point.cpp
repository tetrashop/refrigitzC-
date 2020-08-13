#include "Point.h"



	Point::Point()
	{
		InitializeInstanceFields();
		x = 0;
		y = 0;
	}

	Point::Point(int i, int j)
	{
		InitializeInstanceFields();
		x = i;
		y = j;
	}

	void Point::InitializeInstanceFields()
	{
		x = 0;
		y = 0;
	}

