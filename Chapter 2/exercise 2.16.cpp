#include<iostream>
using namespace std;
int main()
{
	int a,b,sum,product,difference;
	double quotient;
	cout<<"Enter  any two integers";
	cin>>a>>b;
	sum=a+b;
	product=a*b;
	if(a>=b)
	{
	difference=a-b;
	quotient=a/b;
}
else
{
	difference=b-a;
	quotient=b/a;
}
	
	cout<<"sum of two numbers is :"<<sum<<endl;
	cout<<"product of two numbers is :"<<product<<endl;
	cout<<"difference of two numbers is :"<<difference<<endl;
	cout<<"quotient of two numbers is :"<<quotient;
	return 0;
}
