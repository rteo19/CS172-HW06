//Ryan Teo
//CS 172
//EX06_05 14.7 Math: The Complex Class

#include <iostream>
#include "Complex.h"
#include <string>
using namespace std;

int main()
{
	double a = 0; //real component of first complex number
	double b = 0; //imaginary component of first complex number
	double c = 0; //real component of second complex number
	double d = 0; //imaginary component of second complex number

	Complex first(a, b); //creates object for the first complex number
	Complex second(c, d); //creates object for the second complex number

	//prompt user for numbers and input them
	cout << "Enter the first complex number: ";
	cin >> first;
	cout << "Enter the second complex number: ";
	cin >> second;

	//output addition, subtraction, multiplication, division, and absolute value
	cout << "(" << first << ")" << " + " << "(" << second << ")" << " = " << first.add(second) << endl;
	cout << "(" << first << ")" << " - " << "(" << second << ")" << " = " << first.subtract(second) << endl;
	cout << "(" << first << ")" << " * " << "(" << second << ")" << " = " << first.multiply(second) << endl;
	cout << "(" << first << ")" << " / " << "(" << second << ")" << " = " << first.divide(second) << endl;
	cout << "|" << first << "| = " << first.abs() << endl;
	cout << "|" << second << "| = " << second.abs() << endl;
}