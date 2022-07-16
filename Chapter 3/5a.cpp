#include<iostream>
#include<string>
using namespace std;

class A5
{
	public:
		int a;
	A5(int b)
	{
		a =b;
		cout<<"constructor called \n";
		cout<<"value stored in a is :"<<b;
	}
};
