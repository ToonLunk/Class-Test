// classTests.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Items
{
private:
	int itemID;
	double itemPrice;
	int itemQuantity;

public:

	Items()
	{
		itemID = 0;
		itemPrice = 0;
		itemQuantity = 0;
	}

	Items(int id)
	{
		itemID = id;
		itemPrice = 0;
		itemQuantity = 0;
	}

	Items(int id, double price)
	{
		itemID = id;
		itemPrice = price;
		itemQuantity = 0;
	}

	Items(int id, double price, int quantity)
	{
		itemID = id;
		itemPrice = price;
		itemQuantity = quantity;
	}

	void setItemID(int id)
	{
		itemID = id;
	}

	void setItemPrice(double price)
	{
		itemPrice = price;
	}

	void setItemQuantity(int quantity)
	{
		itemQuantity = quantity;
	}

	int getItemID()
	{
		return itemID;
	}

	double getItemPrice()
	{
		return itemPrice;
	}

	int getItemQuantity()
	{
		return itemQuantity;
	}

	void displayInfo()
	{
		cout << "Item ID#: " << itemID << ". Item Price: $" << itemPrice << 
			". Item Quantity: " << itemQuantity << endl;
	}
};

int main()
{
	Items soda(1, 1.99, 50);
	Items tissue(2, 5.69, 35);
	Items bread(3, 2.39, 12);
	Items apples(4, 0.59, 32);

	soda.displayInfo();

}

