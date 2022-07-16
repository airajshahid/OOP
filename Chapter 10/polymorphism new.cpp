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
class Tiger : public Animal
{
	public:
		skin()                            // function overriding: same name same behaviour also called dynamic polymorphism
	    {
		  cout<<"tiger has brown/ black/ white skin";
		}	
	    voice()
	    {
		  cout<<" Rooooaaaaarrrr...........";
	    }
	
};

main()
{
   Tiger t;
    t.skin();
    t.voice();
}
/*
static polymorphism: when in function overloading the parameters are change but same name of function 
highest priority is of child function... in dynamic child's function overrides parent's function
polymorphism: 1. static(function overloading) 2. dynamic (function overriding)
 */
