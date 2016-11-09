//Ryan Teo
//CS 172
//EX06_03 13.5 Baby Names

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int year;
	char gender;
	string name;
	int rank;
	string line;

	//prompt user for year, gender, and name
	cout << "Enter the year: ";
	cin >> year;
	cout << "Enter the gender: ";
	cin >> gender;
	cout << "Enter the name: ";
	cin >> name;
	

	if (year == 2010) //check for year 2010
	{
		ifstream file("2010.txt"); //open 2010 list
		
		while (getline(file, line)) //run until end of file
		{
			rank = line.find(name); //search for name and set it equal to rank

			//check name on each line
			if (rank != string::npos)
				{
					file >> rank; //input the rank of the name to the variable rank
					cout << name << " is ranked #" << rank - 1 << " in the year " << year << endl; //output rank
					break; //end code
				}
		}
		if (rank == string::npos) //checks if name is not found 
		{
			cout << "The name " << name << " is not ranked in the year " << year << endl; 
		}
		file.close(); //close file
	}

	else if (year == 2011) //check for year 2011
	{
		ifstream file("2011.txt"); //open 2011 list

		while (getline(file, line)) //run until end of file
		{
			rank = line.find(name); //search for name and set it equal to rank

			//check name on each line
			if (rank != string::npos)
			{
				file >> rank; //input the rank of the name to the variable rank
				cout << name << " is ranked #" << rank - 1 << " in the year " << year << endl; //output rank
				break; //end code
			}
		}
		if (rank == string::npos) //checks if name is not found 
		{
			cout << "The name " << name << " is not ranked in the year " << year << endl;
		}
		file.close(); //close file

	}
	else if (year == 2012) //check for year 2012
	{
		ifstream file("2012.txt"); //open 2012 list

		while (getline(file, line)) //run until end of file
		{
			rank = line.find(name); //search for name and set it equal to rank

			//check name on each line
			if (rank != string::npos)
			{
				file >> rank; //input the rank of the name to the variable rank
				cout << name << " is ranked #" << rank - 1 << " in the year " << year << endl; //output rank
				break; //end code
			}
		}
		if (rank == string::npos) //checks if name is not found 
		{
			cout << "The name " << name << " is not ranked in the year " << year << endl;
		}
		file.close(); //close file

	}
	else if (year == 2013) //check for year 2013
	{
		ifstream file("2013.txt"); //open 2013 list

		while (getline(file, line)) //run until end of file
		{
			rank = line.find(name); //search for name and set it equal to rank

			//check name on each line
			if (rank != string::npos)
			{
				file >> rank; //input the rank of the name to the variable rank
				cout << name << " is ranked #" << rank - 1 << " in the year " << year << endl; //output rank
				break; //end code
			}
		}
		if (rank == string::npos) //checks if name is not found 
		{
			cout << "The name " << name << " is not ranked in the year " << year << endl;
		}
		file.close(); //close file

	}
	else if (year == 2014) //check for year 2014
	{
		ifstream file("2014.txt"); //open 2014 list

		while (getline(file, line)) //run until end of file
		{
			rank = line.find(name); //search for name and set it equal to rank

			//check name on each line
			if (rank != string::npos)
			{
				file >> rank; //input the rank of the name to the variable rank
				cout << name << " is ranked #" << rank - 1 << " in the year " << year << endl; //output rank
				break; //end code
			}
		}
		if (rank == string::npos) //checks if name is not found 
		{
			cout << "The name " << name << " is not ranked in the year " << year << endl;
		}
		file.close(); //close file

	}
	else //if 2010-2014 is not entered output invalid option
	{
		cout << "Invalid option" << endl;
	}
}
