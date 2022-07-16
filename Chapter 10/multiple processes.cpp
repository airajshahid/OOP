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

/*
destructor is same as constructor but takes no parameters
it deletes the memory which is automatically created when object of class is created
firstly the destructor of child class is called and then parent class
same name as constructor but starts with ~(dilda) sign
constructor is called first but destructor is called at the end
parent process is executed first but ends at last bcz child class ends first
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
	~Animal(){
 		cout<<"animal class destroyed \n";
	 }
    voice()
	{
		cout<<"gurrr gurrrr gurrrrr \n";
		}	
};
 
 class Tiger : public Animal   // child class
 {
 public:                            // can be used by anyone
    Tiger()
    {
    	cout<<"tiger class constructor: \n";
	}
	~Tiger()
    {
    	cout<<"tiger class destroyed \n";
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
		cout<<"roar......... \n";
	}
};

class cats: public Tiger{      //public inheritance 
	public:
	//	voice()
	//	{
	//		cout<<"meaowwwww....  meaowwww.... \n";
	//	}
};

main()
{
	//Tiger t;
	cats c;
	//Animal a;
	//a.voice(); 
	c.voice();
	//cout<<t.speed<<"\n";
	//t.getlegs();
	//t.voice();    // "super" keyword will be used to call parent voice bcz child's function is priority
	
}
