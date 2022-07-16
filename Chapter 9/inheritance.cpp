// Inheritance
// used to increase the useability of code
// parent class and child class concept
#include<iostream>
#include<string>
using namespace std;
// by default private

class dada_g{
	public:
	string cast =" Kashmiri";
	
};

class parent{
	public:
	string sirname = " Shahid";
	
};

class child : public dada_g, public parent{        // multiple class inheritance     // inheritance syntax : public className
	public:
	string name = "Airaj";
	
};

main()
{
 child c;
 c.sirname;                                        // multiple class inheritance only in C++ not in Java and C#
 cout<<c.sirname;
 // diamond problem: problem which occurs when same name data members in different classes thus a programmmer will have to check again and again.
 // diamond problem is the reason for removal of multiple class inheritance in C# and Java	
}
