#pragma once
#include <string>

using namespace std;

class Complex
{
private:
	//a is real, b is imaginary
	double a;
	double b;

public:
	//constructors
	Complex(double a, double b);
	Complex(double a);
	Complex();

	//functions
	Complex add(Complex& c);
	Complex subtract(Complex& c);
	Complex multiply(Complex& c);
	Complex divide(Complex& c);
	double abs();
	void toString();
	double getRealPart();
	double getImaginaryPart();

	//overloaded operators
	Complex operator+(Complex& c);
	Complex operator-(Complex& c);
	Complex operator*(Complex& c);
	Complex operator/(Complex& c);
	Complex operator+=(Complex& c);
	Complex operator-=(Complex& c);
	Complex operator*=(Complex& c);
	Complex operator/=(Complex& c);
	double operator[](int x);
	Complex operator+();
	Complex operator-();
	Complex operator++();
	Complex operator--();
	
	friend ostream& operator<<(ostream& out, const Complex& c);
	friend istream& operator>>(istream& in, Complex& c);
};
