//Ryan Teo
//CS 172
//EX06_02 13.2 Count Characters

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string file; //string variable for the name of the file the user enters
	cout << "Enter the name of the file (.txt): "; //promot user for file name (the file I used is called test.txt)
	cin >> file;


	fstream iofile(file, ios::in | ios::out); //checks if file exists
	int count = 0;
	if (!iofile)
	{
		cout << "Can't open file" << endl;
		return 0;
	}
	else
	{
		char character; 
		while (iofile >> character) //counts the characters in the file
		{
			count++;
		}
		iofile.clear();
		iofile.seekp(0, ios::end);
		cout << "This file has " << count << " characters" << endl;
	}

	iofile.close();
	return 0;

}