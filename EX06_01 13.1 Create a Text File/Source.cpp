//Ryan Teo
//CS 172
//EX06_01 13.1 Create a Text File

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	
	ofstream fout;
	fout.open("Exercise13_1.txt"); //creates text file if it doesn't already exist
	if (fout.fail()) //checks if the file can be opened
	{
		cout << "can't open file" << endl;
		return 0;
	}

	int x = 0;
	for (int i = 0; i < 100; i++) //writes 100 integers to the file randomly
	{
		x = rand() % 100;
		fout << x << " ";
	}
	fout.close();
}