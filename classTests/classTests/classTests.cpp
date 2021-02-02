// classTests.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class People
{
private:
	string fName; // for first name
	string lName; // for last name
	int age; // for age

public:
	void setFName(string);
	void setLName(string);
	int setAge(int);

	// "string" or "int" before definition shows what the return type will be
	string getFName() const; // const means it will not alter data
	string getLName() const;
	int getAge() const;
};

int main()
{
	cout << "Hello World!\n";
}

