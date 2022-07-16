#include<iostream>
using namespace std;
// this is divide and conquer strategy


// function overloading 
//fuctions with same names but have different number of parameters

 
  void add (int *&var)
{
	cout<<"address in calling function "<<&var<<"\n";
 }
 
 
 int main()                // main() is the calling function
{ 
   int var=10;
   cout<<"address in main function ";
   cout<<&var;
    void add(int *&var);	

}

