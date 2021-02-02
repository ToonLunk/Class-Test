// classTests.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class People
{
private:
	string userFirstName; // for first name
	string userLastName; // for last name
	int userAge; // for age

public:
	
	// Mutators

	void setFName(string name)
	{
		userFirstName = name;
	}

	void setLName(string name)
	{
		userLastName = name;
	}

	void setAge(int age)
	{
		userAge = age;
	}

	// accessors

	string getFName() const
	{
		return userFirstName;
	}

	string getLName() const
	{
		return userLastName;
	}

	int getAge() const
	{
		return userAge;
	}
};

int main()
{
	People tyler; // make an object "tyler" with class "People"
	tyler.setFName("John");
	tyler.setLName("Doe");
	tyler.setAge(21);
	cout << "Name: " << tyler.getFName() << " " << tyler.getLName() << endl << "Age: " <<
		tyler.getAge() << endl << endl;

	tyler.setFName("Jane");
	tyler.setLName("Doe");
	tyler.setAge(23);
	cout << "Name: " << tyler.getFName() << " " << tyler.getLName() << endl << "Age: " <<
		tyler.getAge();
}

