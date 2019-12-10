#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter any two integers";
	cin>>a>>b;
	if(a==b)
	{
		cout<<"numbers are equal";
	}
	else 
	{
		if (a>b)
		{
			cout<<"numbers are not equal and "<<b<< "is smaller";
		}
		else
		{
			cout<<"numbers are not equal and "<<a<< " is smaller";
		}
	}
	return 0;
}
