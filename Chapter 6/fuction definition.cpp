#include<iostream>
using namespace std;
 void add (int a, int b);   //signature of fuction(don't mention return type) (function header: return type, name, parameters)

int main()                // main() is the calling function
{
   add(3,5);	
   add(3,10);	
   add(3,95);	
}

 void add (int a, int b)
{
	cout<<"plus "<<a+b<<"\n";
 } 
 
