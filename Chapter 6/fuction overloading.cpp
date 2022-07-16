#include<iostream>
using namespace std;

// function overloading 
//fuctions with same names but have different number of parameters


  void add (int a, int b)
{
	cout<<"plus "<<a+b<<"\n";
 } 
 
  void add (int a, int b, int c)
{
	cout<<"plus "<<a+b+c<<"\n";
 }
 
   void add (int a, int b, int c, int d)
{
	cout<<"plus "<<a+b+c+d<<"\n";
 } 

int main()                // main() is the calling function
{
   add(3,5);	
   add(3,10,8);	
   add(3,95,2,0);	
}


 
