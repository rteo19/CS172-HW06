#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include "Complex.h"
using namespace std;

 //constructs object with specified parameters
Complex::Complex(double a, double b)
{
	this->a = a;
	this->b = b;
}

//constructs object where there is no imaginary component
Complex::Complex(double a)
{
	this->a = a;
	b = 0;
}

//creates object where the number is 0
Complex::Complex()
{
	a = 0;
	b = 0;
}

//for the below operations:
//a and b make up the first number and c.a and c.b make up the second number 
//a and c.a are real
//b and c.b are imaginary

//adds two complex numbers
Complex Complex::add(Complex& c)
{
	double real = a + c.a;
	double imaginary = b + c.b;
	return Complex(real, imaginary);
}

//subtracts two complex numbers
Complex Complex::subtract(Complex& c)
{
	double real = a - c.a;
	double imaginary = b - c.b;
	return Complex(real, imaginary);	
}

//multiplies two complex numbers
Complex Complex::multiply(Complex& c)
{
	double real = (a * c.a) - (b * c.b);
	double imaginary = (b * c.a) + (a * c.b);
	return Complex(real, imaginary);
}

//divides two complex numbers
Complex Complex::divide(Complex& c)
{
	double real = ((a * c.a) + (b * c.b)) / ((c.a * c.a) + (c.b * c.b));
	double imaginary = ((b * c.a) - (a * c.b)) / ((c.a * c.a) + (c.b * c.b));
	return Complex(real, imaginary);
}

//finds absolute value of one complex number
double Complex::abs()
{
	return sqrt(a * a + b * b);
}

//outputs a complex number in the form a + bi
void Complex::toString()
{
	cout << "(" << a << " + " << b << "i)";
}

// returns a which is real
double Complex::getRealPart()
{
	return a;
}

//returns b which is imaginary
double Complex::getImaginaryPart()
{
	return b;
}     

//overloaded operators below

Complex Complex::operator+(Complex& c) //adds two complex numbers
{
	double real = a + c.a; 
	double imaginary = b + c.b; 
	return Complex(real, imaginary); 
}

Complex Complex::operator-(Complex& c) //subtracts two complex numbers
{
	double real = a - c.a; 
	double imaginary = b - c.b;
	return Complex(real, imaginary);
}
Complex Complex::operator*(Complex& c) //multiplies two complex numbers
{
	double real = (a * c.a) - (b * c.b);
	double imaginary = (b * c.a) + (a * c.b);
	return Complex(real, imaginary);
}
Complex Complex::operator/(Complex& c) //divides two complex numbers
{
	double real = ((a * c.a) + (b * c.b)) / ((c.a * c.a) + (c.b * c.b));
	double imaginary = ((b * c.a) - (a * c.b)) / ((c.a * c.a) + (c.b * c.b));
	return Complex(real, imaginary);
}
Complex Complex::operator+=(Complex& c)
{
	return c.a += c.b;
}
Complex Complex::operator-=(Complex& c)
{
	return c.a -= c.b;
}
Complex Complex::operator*=(Complex& c)
{
	return c.a *= c.b;
}
Complex Complex::operator/=(Complex& c)
{
	return c.a /= c.b;
}

//0 returns a and 1 returns b
double Complex::operator[](int x)
{
	if (x == 0)
	{
		return a;
	}
	else if (x == 1)
	{
		return b;
	}
}

Complex Complex::operator+() //returns true values for a and b
{
	return Complex(a, b);
}

Complex Complex::operator-() //returns negated values for a and b
{
	a = -a;
	b = -b;
	return Complex(a, b);
}

Complex Complex::operator++() //increase a and b both by one
{
	a = a + 1;
	b = b + 1;
	return Complex(a, b);
}

Complex Complex::operator--() //decrease a and b both by one
{
	a = a - 1;
	b = b - 1;
	return Complex(a, b);
}

ostream& operator<<(ostream& out, const Complex& c) //outputs a complex number in the form a + bi
{
	out << c.a << " + " << c.b << "i";
	return out;
}

istream& operator>>(istream& in, Complex& c) //inputs the real and imaginary components of a complex number
{
	in >> c.a >> c.b;

	return in;
}
