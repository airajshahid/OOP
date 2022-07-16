#include<iostream>
using namespace std;

// function overloading 
//fuctions with same names but have different number of parameters


  void add (int a, string b)
{
	cout<<"first integer second string "<<a<<" "<<b<<"\n";
 } 
 
  void add (string a, int b)
{
	cout<<"first string second integer "<<a<<" "<<b<<"\n";
 }
 
 //  void add (int a, int b, int c, int d)
//{
//	cout<<"plus "<<a+b+c+d<<"\n";
 //} 
 
 
 int main()                // main() is the calling function
{
   add("airaj",5);	
   add(3,"hello");	
  // add(3,95,2,0);	
}

