#include<iostream>
using namespace std;
int main()
{
	int a,b,sum;
	cout<<"Enter any two integers :";
	cin>>a>>b;
	sum=a+b;
	if(a%2==0)
	{
		cout<<"first integer is not an odd integer"<<endl;
    }  
	else 
	{
		cout<<"first integer is  an odd integer"<<endl;	
	}
	if(b%2==0)
	{
	    cout<<"second integer is not an odd integer"<<endl;	
	}	
	else
	{
		cout<<"second integer is an old integer"<<endl;
	}
	if(sum%2==0)
	{
		cout<<"sum is not an odd integer"<<endl;
	}
	else
	{
		cout<<"sum is an odd number"<<endl;
	}
	return 0;
}
