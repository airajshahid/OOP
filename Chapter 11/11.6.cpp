#include<iostream>
#include<string>
using namespace std;
class student{
};
class UndergraduateStudent: public student
{
public:
 UndergraduateStudent()
 {
 	cout<<"constructor of UndergraduateStudent";
 }
 ~UndergraduateStudent()
 {
 	cout<<"destructor of UndergraduateStudent";
	}	
};
class GraduateStudent: public student
{
public:
	GraduateStudent()
	{
		cout<<"constructor of GraduateStudent";
	}
	~GraduateStudent()
	{
		cout<<"destructor of GraduateStudent";
	}
};
class Freshman: public UndergraduateStudent
{
public:
    Freshman()
	{
		cout<<"constructor of Freshman";
		}	
	~Freshman()
	{
		cout<<"destructor of Freshman";
	}
};
class sophomore: public UndergraduateStudent
{
public:	
    sophomore()
    {
    	cout<<"constructor of sophomore";
	}
	~sophomore()
	{
		cout<<"destructor of sophomore";
	}
};
class junior: public UndergraduateStudent
{
public:
	junior()
    {
    	cout<<"constructor of junior";
	}
	~junior()
    {
    	cout<<"destructor of junior";
	}
};
class senior :public UndergraduateStudent
{
public:
	senior()
    {
    	cout<<"constructor of senior";
	}
	~senior()
    {
    	cout<<"destructor of senior";
	}
};
class DoctoralStudent : public GraduateStudent
{
public:
	DoctoralStudent()
	{
	    cout<<"constructor of DoctoralStudent";	
	}
	~DoctoralStudent()
	{
	    cout<<"destructor of DoctoralStudent";	
	}
};
class MastersStudent : public GraduateStudent
{	
public:
    MastersStudent()
    {
    cout<<"constructor of MastersStudent";	
	}
	~MastersStudent()
    {
    cout<<"destructor of MastersStudent";	
	}
};

