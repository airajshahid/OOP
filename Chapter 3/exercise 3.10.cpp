#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
 class Invoice
 {
 	Invoice ( string &number, string &description, int quantity, int price)
 	{
	 setPartNumber(number);
 	setPartDescription(description);
 	setItemQuantity(quantity);
 	setPricePerItem(price);
    }
    
    string setPartNumber(string &number)
    {
    cout<<"enter part number :";
	cin>>number;
	PartNumber=number;	
	}
	
	string setPartDescription(string &description)
	{
		cout<<"enter description";
		cin>>description;
		PartDescription=description;
	}
	
		int setItemQuantity (int quantity)
		{
			cout<<"enter quantity";
			cin>>quantity;
			if (quantity>0)
			itenQuantity=quantity;
			else
			cout<<"quantity shouldnot be zero";
		}
		int setPricePerItem (int price)
		{
			if(price>0)
			pricePerItem=price;
			else cout<<"price should not be zero";
		}
	
	 void getPartNumber()
	{
		return partNumber;
		}	
	
	void getPartDescription()
	{
		return partDescription;
	}
	
	void getItemQuantity()
	{
		return itemQuantity;
	}
	
	void getPricePerItem()
	{
		return pricePerItem;
	}
 };
 
 int main()
 {
 	Invoice obj;
 	obj
 	
 }
