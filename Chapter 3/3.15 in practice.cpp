#include<iostream>
#include<string>
using namespace std;
class HeartRate
{
	string FirstName;
	string LastName;
	int day,month,year;
	int Age;
	int maxh;
	float fifty,eighty;
	
	
	public:
		 HeartRate(string fname, string lname,int d, int m, int y )
		{
		FirstName=fname;
		LastName=lname;
		day=d;
		month=m;
		year=y;
		print();
			
		
		
		}
		getfirstname()
		{
		cout<<"your  first name is ="<<FirstName<<"\n";	
		}
		getlastname()
		{
			cout<<"your last name is ="<<LastName<<"\n";	
			
		}
		getDOB()
		{
			cout<<day<<"//"<<month<<"//"<<year<<"\n";	
		}
		setfirstname(string a)
		{
		FirstName=a;	
		}
		setlastname(string a)
		{
		LastName=a;	
		}
		setDOB(int a,int b,int c)
		{
		day=a;
		month=b;
		year=c;	
		}
		age()
		{
			Age=2019-year;
			cout<<"Age in years="<<219-year<<"\n";
		}
		maxheartrate()
		{
			maxh=220-Age;
			cout<<"Maximum heart rate is "<<maxh<<"\n";
			
		}
		targetheartrate()
		{
			fifty=maxh*0.5;
			eighty=maxh*0.8;
			
			cout<<"your target heartrate is 50 to 80%"<<fifty<<eighty<<"\n";
		}
		print()
		{
			getfirstname();
		getlastname();
		getDOB();
		setfirstname(string a);
		setlastname(string a);
		setDOB(int a,int b,int c);
		age();
		maxheartrate();
		targetheartrate();
		}
	
		
};

