#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class MotorVehicle{
	string make;
	string fuelType;
	int yearOfManufacture;
	string color;
	int engineCapacity;
	
	MotorVehicle(int yearOfManufacture,string color,int engineCapacity)
	{
		public:
	{
	int	setYearOfManufacture(int a);
	    yearOfManufacture=a;
	    
	string 	setColor();
	color="black";
	
	int	setEngineCapacity(int b);
	engineCapacity=b;
    }
	 
     getYearOfManufacture();
     {
     	cout<<"year of manufacture is :"<<yearOfManufacture;
	 }
	 
	
	getEngineCapacity();
	{
		cout<<"engine capacity is :"<<engineCapacity;
    }
	
	getColor(string c);
	{
		cout<<"colour is :"<<color;
	}
	}
	
	diplayCarDetails();
	{
	string make="toyota";
	string fuelType="petrol";
		
	}
	
};
