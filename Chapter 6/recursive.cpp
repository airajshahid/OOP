#include<iostream>
using namespace std;

int factorial (int a)
{
	if (a<=1)                   //base case i.e condition for termination
	{
		return 1;
	}
	else 
	{
	return a*factorial(a-1);    // recursive function i.e fuction which calls itself within itself
}

}


main()
{
	cout<<factorial(8);
}

