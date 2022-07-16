#include<iostream>
#include<string>
using namespace std;
/*
virtual function
pure virtual function
abstract class
composition
operator overloading 
*/
class Animal                     // generic class
{
	public:
		string tail = "long tail";
	    virtual skin()           // this is virtual function which will be dynamically overridden by child class if not no statement will be executed if the body of this function is blank
	    {
		  cout<<"animal has brown skin";     //in case the function is not overriden the by default this will be executed 
		}	
	    virtual voice() =0;         // always made in parent class
	    
	/* in a pure virtual function the compiler wants no statements in virtual function and generates error if not overridden
*/
};
class Tiger : public Animal
{
	public:
		skin()                            
	    {
		  cout<<"tiger has brown/ black/ white skin";
		}	
	    voice()
	    {
		  cout<<" Rooooaaaaarrrr...........";
	    }
	
};
//class Cat : public Tiger {
	// multiple inheritance
	// concept only in C++ not in other languages due to confusion
//};
main()
{
//	Cat c;
//	c.voice();           //diamond problem when function execution is ambiguous
  // Tiger t;
    //t.skin();
    //t.voice();
}

