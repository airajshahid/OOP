#include<iostream>
#include<string>
using namespace std;
class CM{
	public:
	CM()
	{
		cout<<"It is the constructor of CM class\n";
	}
	~CM()
	{
		cout<<"It is the destructor of CM class\n";
	}
};
class employee : public CM
{
	public:
	employee()
	{
	cout<<"It is the constructor of employee class\n";	
	}
	
	~employee()
	{
	cout<<"It is the destructor of employee class\n";	
	}
	
};
class student : public CM
{
	public:
	student()
	{
		cout<<"It is the constructor of student class\n";
	}
	
	~student()
	{
		cout<<"It is the destructor of student class\n";
	}
};
class alumnus : public CM
{
	public:
	alumnus()
	{
		cout<<"It is the constructor of alumnus class\n";
	}
	
	~alumnus()
	{
		cout<<"It is the destructor of alumnus class\n";
	}
};
class faculty : public employee
{
	public:
	faculty()
	{
		cout<<"It is the constructor of faculty class\n";
	}
	
	~faculty()
	{
		cout<<"It is the destructor of faculty class\n";
	}
};
class staff : public employee
{
	public:
	staff()
	{
		cout<<"It is the constructor of staff class\n";
	}
	
	~staff()
	{
		cout<<"It is the destructor of staff class\n";
	}
};
class admin : public faculty
{
	public:
     admin()
	 {
	 	cout<<"It is the constructor of admin class\n";
		 }
		 	
	~admin()
	 {
	 	cout<<"It is the destructor of admin class\n";
		 }	 
};
class teacher : public faculty
{
	public:
	teacher()
	{
		cout<<"It is the constructor of teacher class\n";
	}
	
	~teacher()
	{
		cout<<"It is the destructor of teacher class\n";
	}
	
	
};
class adminTeach : public teacher, public admin
{
	public:
    adminTeach()
	 {
	 	cout<<"It is the constructor of adminTeach class\n";
		 }
		 
    ~adminTeach()
	 {
	 	cout<<"It is the destructor of adminTeach class\n";
		 }	
};

main()
{
 CM a;
 employee b;
 student c;
 alumnus d;
 faculty e;
 staff f;
 admin g;
 teacher h;
 adminTeach i; 
}
