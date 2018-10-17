// Lab07.cpp
// Matthew Hanley
// COSC 1030, Section 01
// Lab 07
// March 6, 2018

#include<fstream>
#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;   

using std::getline;

int main()
{
	string first;
	string second;
	ifstream inFile;
	ofstream outFile;
	bool opened;
	
	do
	{
		
		opened = true;
		cout << "Please enter two filenames." << endl;
		cout << "I'll copy the first to the second." << endl;
		
		getline(cin, first);
		inFile.open(first);
		getline(cin, second);
		outFile.open(second);

		if (!inFile)
		{
			cout << "Could not open input: " << first << endl;
			opened = false;

		}

		if (!outFile)
		{
			cout << "Could not open input: " << second << endl;
			opened = false;
		}
		
		if (opened == false)
		{
			inFile.close();
			inFile.clear();
			outFile.close();
			outFile.clear();
		}
	} while (opened == false);

	while (!inFile.eof())
	{
		getline(inFile, second);
		outFile << (second + "\n");
	}

	cout << "------DONE------" << endl;
	inFile.close();
	outFile.close();
	system("pause");
	
	return 0;
}
