// Friend Function Concept

#include<iostream>
#include<string>
using namespace std;

class home{
	public:
	string bike = "Honda";
	string mobile = "Samsung";
	friend dost();                                   //telling class that dost is a friend function
};
                                                     
dost(int &a)                                               //objects and arrays are always passed by reference not by value                                                     
{                                                    // passing by value means copying... and by reference means original
   int *ptr= &a;
   ptr=ptr+5;
   cout<<ptr;                                                 	
}

main()
{
	int original =2;
	cout<<dost(original)<<"\n";
	cout<<original;
}
