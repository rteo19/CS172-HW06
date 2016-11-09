#pragma once
using namespace std;

//circle class from 10.9
class Circle
{
private:
	double radius;
	static int numberOfObjects;
public:
	Circle();
	Circle(double);
	double getArea() const;
	double getRadius() const;
	void setRadius(double);
	static int getNumberOfObjects();

	//Relational operators
	bool Circle::operator==(Circle& c);

	bool Circle::operator!=(Circle& c);

	bool Circle::operator<(Circle& c);

	bool Circle::operator<=(Circle& c);

	bool Circle::operator>(Circle& c);

	bool Circle::operator>=(Circle& c);

};