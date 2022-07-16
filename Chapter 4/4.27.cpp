#include<iostream>
using namespace std;
int main()
{
	int value=0;
	while (!value)
	{
		cout<<"enter five digit number :";
		cin>>value;
		if (value<10000)
		{
			value =0;
		}
		if (value>99999)
		{
			value=0;
		}
		if (value/10000==value%10)
		{
			if (value%10000/1000==value%100/10)
			{
				cout<<value<<" is Palindrome"<<endl;
			}
		}
		else
		{
			cout<<value<<"is not a palindrome "<<endl;
		}
	}
}
