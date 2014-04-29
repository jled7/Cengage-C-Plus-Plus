#include <iostream>
#include "illustrate.h"

int illustrate::count = 0;
int illustrate::y = 0;

void illustrate::print() const
{
	std::cout << "x = " << x << ", y = " << y
		 << ", count = " << count << std::endl;
}

void illustrate::setX(int a)
{
	x = a;
}

void illustrate::incrementY()
{
	y++;
}
illustrate::illustrate(int a)
{
	x = a;
}
