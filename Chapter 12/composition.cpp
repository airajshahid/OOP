//when two classes have different characteristics, they are composed  
#include<iostream>
using namespace std;
class birthday
{
	public:
		int day, month, year;
	birthday(int d, int m, int y)
    {
    	day=d;
    	year=y;
    	month=m;
	}
	birthday()         //constructor overloading known as default constructor
	{
		
	}
       
};
class student
{
	public:
		birthday bd;
		student(birthday &b)
		{
			bd=b;
		}
	    age()
	    {
	    	cout<<" the age of student is: "<<2020-bd.year;
		}
};
main()
{
	birthday bd(20,11,2000);
	student s(bd);
	s.age();
}
