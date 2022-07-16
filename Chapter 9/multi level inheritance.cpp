#include<iostream>
#include<string>
using namespace std;
// by default private
// concept important for gaming in unity 3D
class dada_g{
	public:
	string cast =" Kashmiri";
	
};

class parent: public dada_g{         // multi level inheritance in which parent is inherited with grandparent class
	public:                          // and child class is inherited with parent class at different levels 
	string sirname = " Shahid";
	
};

class child : public parent{        // multiple class inheritance     // inheritance syntax : public className
	public:                     
	string name = "Airaj";
	
};

main()
{
 child c;
 cout<<c.sirname;                                        // multiple class inheritance only in C++ not in Java and C#
 cout<<c.name;
 cout<<c.cast;
}
