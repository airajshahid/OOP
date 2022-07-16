#include<iostream>
#include<string>
using namespace std;
class shape
{
public:
	shape()
	{
		cout<<"constructor of shape";
	}
	~shape()
	{
		cout<<"destructor of shape";
	}
};
class  D2 : public shape
{
public:
	D2()
	{
		cout<<"constructor of D2";
	}
	~D2()
	{
		cout<<"destructor of D2";
	}
};
class D3 : public shape
{
public:
	D3()
	{
		cout<<"constructor of D3";
	}
	~D3()
	{
		cout<<"destructor of D3";
	}
};
class circle : public D2
{
public:
	circle()
	{
		cout<<"constructor of circle";
	}
	~circle()
	{
		cout<<"destructor of circle";
	}
};
class triangle : public D2
{
public:
	triangle()
	{
		cout<<"constructor of triangle";
	}
	~triangle()
	{
		cout<<"destructor of triangle";
	}
};
class rectangle : public D2
{
public:
	rectangle()
	{
		cout<<"constructor of rectangle";
	}
	~rectangle()
	{
		cout<<"destructor of rectangle";
	}
};
class square : public D2
{
public:
	square()
	{
		cout<<"constructor of square";
	}
	~square()
	{
		cout<<"destructor of square";
	}
};
class sphere : public D3
{
public:
	sphere()
	{
		cout<<"constructor of sphere";
	}
	~sphere()
	{
		cout<<"destructor of sphere";
	}
};
class cube : public D3
{
public:
	cube()
	{
		cout<<"constructor of cube";
	}
	~cube()
	{
		cout<<"destructor of cube";
	}
};
class cuboid : public D3
{
public:
	cuboid()
	{
		cout<<"constructor of cuboid";
	}
	~cuboid()
	{
		cout<<"destructor of cuboid";
	}
};
