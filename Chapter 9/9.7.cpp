#include<iostream>
#include<string>
using namespace std;

class Name{
	public:
	string firstName, middleName, lastName , salutation;
	public:
	Name(string fname, string mname, string lname, string sal)
	{
		firstName=fname;
		middleName=mname;
	    lastName=lname;
	    salutation=sal;
	      setfirstName(fname);
	      setmiddleName(mname);
	      setlastName(lname);
	      setsalutation(sal);
	        	getfirstName();
	        	getmiddleName();
	        	getlastName();
	        	getsalutation();
	        		
	}
	
	string setfirstName(string f)
	{
		firstName=f;
	}
    
	string setmiddleName(string m)
	{
		middleName=m;
	}

	string setlastName(string l)
	{
		lastName=l;
	}	
	
	string setsalutation (string s)
	{
		salutation=s;
	}
	
	getfirstName ()
	{
		cout<<" "<<firstName;
	}
	
	getmiddleName ()
	{
		cout<<" "<<middleName;
	}
	
	getlastName ()
	{
		cout<<" "<<lastName;
	}
	
		getsalutation()
	{
		cout<<" "<<salutation;
	}
};

main()
{
	Name obj("miss","airaj","shahid","hello");
}
