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
	People john; // make an object "john" with class "People"
	john.setFName("John");
	john.setLName("Doe");
	john.setAge(21);
	cout << "Name: " << john.getFName() << " " << john.getLName() << endl << "Age: " <<
		john.getAge() << endl << endl;
	
	People jane; // make an object "jane" with class "People"
	jane.setFName("Jane");
	jane.setLName("Doe");
	jane.setAge(23);
	cout << "Name: " << jane.getFName() << " " << jane.getLName() << endl << "Age: " <<
		jane.getAge();
}

