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
class Animal
{
	public:
		string tail = "long tail";
	    skin()
	    {
		  cout<<"animal has brown skin";
		}	
	    voice()
	    {
		  cout<<"kuku kuku";
	    }
};
class Tiger
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
class Cat : public Tiger , public Animal {
	// multiple inheritance
	// concept only in C++ not in other languages due to confusion
};
main()
{
	Cat c;
	c.voice();           //diamond problem when function execution is ambiguous
  // Tiger t;
    //t.skin();
    //t.voice();
}

