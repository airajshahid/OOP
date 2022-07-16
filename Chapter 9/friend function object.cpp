// Friend Function Concept

#include<iostream>
#include<string>
using namespace std;

class home{
	private:
	string bike = "Honda";
	string mobile = "Samsung";
	friend dost(home &obj);                                   //telling class that dost is a friend function
};
                                                     
dost(home &obj)                                               //objects and arrays are always passed by reference not by value                                                     
{                                                    // passing by value means copying... and by reference means original
    obj.bike= "FERRARI";
	cout<<obj.bike;                                            	
}

main()
{
	home obj;                             // by default the objects of class are passed by reference no need of & sign
	dost(obj);
}
