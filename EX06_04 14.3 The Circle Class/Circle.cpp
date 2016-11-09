#include <iostream>
#include "Circle.h"
using namespace std;

//circle class from 10.9
int Circle::numberOfObjects = 0;

//construct a circle object
Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}

//construct a circle object
Circle::Circle(double newRadius)
{
	radius = newRadius;
	numberOfObjects++;
}
double Circle::getArea() const
{
	return radius * radius * 3.14159;
}
double Circle::getRadius() const
{
	return radius;
}
void Circle::setRadius(double newRadius)
{
	radius = (newRadius >= 0) ? newRadius : 0;
}
int Circle::getNumberOfObjects()
{
	return numberOfObjects;
}

//Implementation of relational operators
bool Circle::operator==(Circle& c)
{
	return (getRadius() == c.getRadius()); //overloaded == operator
}

bool Circle::operator!=(Circle& c)
{
	return (getRadius() != c.getRadius());
}

bool Circle::operator<(Circle& c)
{
	return (getRadius() < c.getRadius());
}

bool Circle::operator<=(Circle& c)
{
	return (getRadius() <= c.getRadius());
}

bool Circle::operator>(Circle& c)
{
	return (getRadius() > c.getRadius());
}

bool Circle::operator>=(Circle& c)
{
	return (getRadius() >= c.getRadius());
}