#include<iostream>
#include<string>
using namespace std;
class university{
public:
	university()
	{
		cout<<"constructor of university";
	}
	~university()
	{
		cout<<"destructor of university";
	}	
};
class academic :public university
{
public:
	academic()
	{
		cout<<"constructor of academic";
	}
	~academic()
	{
		cout<<"destructor of academic";
	}	
};
class administrative : public university
{
public:	
	administrative()
	{
		cout<<"constructor of administrative";
	}
	~administrative()
	{
		cout<<"destructor of administrative";
	}
};
class permanent : public administrative, academic
{
public:
	permanent()
	{
		cout<<"constructor of permanent";
	}
	~permanent()
	{
		cout<<"destructor of permanent";
	}	
};
class contract : public administrative, academic
{
public:
	contract()
	{
		cout<<"constructor of contract";
	}
	~contract()
	{
		cout<<"destructor of contract";
	}	
};

