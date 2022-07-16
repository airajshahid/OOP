#include<iostream>
using namespace std;

class Animal{ // class having a pure virtual function is called an abstract class, such a class have no object
	public: // pure virtual function have no implementation
		virtual voice()=0;//pure virtual //virtual shows it is a dummy function and it will be a parent class.
		int legs=4;
};
class tiger: public Animal {
	public:
	voice() 
		{
			cout<<"Rooooaaaarrrrrr...... ";
		}
};
class cat: public Animal {
	public:
	voice()
		{
			cout<<"meaaooowwwwww........ ";
		}
	
};
class snake: public Animal {
	public:
	voice()
		{
			cout<<"sssssssssssssssssss........ ";
		}
	
};
main()
{
//	Animal a;
//	a.voice();
	tiger t;
	t.voice(); // it have two voice functions so priority is of child class
}
