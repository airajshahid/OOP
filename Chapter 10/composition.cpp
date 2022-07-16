#include<iostream>
#include<string>
// different type of classes are not inherited they are composed  #composition:):) 
using namespace std;
class birthday{
	public:
	int day, year, month;
	birthday(int d, int m, int y)
	{
	day =d;
	month =m;
	year =y;	
	}
	birthday()         // another constructor to resolve error i.e contrucor overloading
	{
		
	}
	DOB()
	{
		cout<<day<<"\\"<<month<<"\\"<<year<<endl;	}
};

class student{
	public:
	birthday bd;
	student(birthday &b)      // here the "birthday" is class specifying the data type
	{
		bd = b;                // b is a object parameter passed by reference...cz obj & array are passed by reference 
	}
	age(){
		cout<<2020- bd.year;   // bd is object used to access the variables 
	}
};

main()
{
	birthday b(20,11,2000);
	student s(b);
	s.age();
}
