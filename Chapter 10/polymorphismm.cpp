//***polymorphism***         two things similar in appearance but different behaviours
// function overload vs fuction override
// static polymorphism vs dynamic polymorphism
//constructor & destructor


/*
******inheritance*****
1. child class will use the public and private member of parent class
2. child class will not be able to use private member of parent class
3. child use protected member of parent class only in one class
4. three types of inheritance exist (public, private, protected 
5. public inheritance: child class will inherit all public member of parent class as 
public member, protected as protected and private will not be used
6. protected inheritance: childw will use public member of parent as protected and 
protected member as protected 
7.private inheritance: public and protected members of parent class as private 

*/ 
#include<iostream>
#include<string>
using namespace std;
 class Animal{                //parent class
 public:
 	int legs = 4;
 protected:
 	string menu= "grass";
 private:
    string petname = "puppy";
 public:
 	Animal(){
 		cout<<"animal class constructor: \n";
	 }
    voice()
	{
		cout<<"gurrr gurrrr gurrrrr";
		}	
};
 
 class Tiger : public Animal   // child class
 {
 public:                            // can be used by anyone
    Tiger()
    {
    	cout<<"tiger class constructor: \n";
	}
 	int speed = 104;
 protected:                         // can be used by parent and child class
 	string menu= "meat";
 private:                           // can be used by parent class only
    string petname = "tiggeyyy";
 public:
    getlegs()
    {
    	cout<<legs<<"\n";
	}
	// function overload: same name different parameters
	voice()       // function override: same name same parameters, child class' function will be executed                                 
	{
		cout<<"roar.........";
	}
};

main()
{
	Tiger t;
	cout<<t.speed<<"\n";
	t.getlegs();
	t.voice();    // "super" keyword will be used to call parent voice bcz child's function is priority
	
}
