#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter the first number :";
	cin>>x;
	cout<<"Enter the second number :";
	cin>>y;
	if(x%y==0)
	{
		cout<<"first number is multiple of second number";
	}
	else
	{
		cout<<"first number is not a multiple of second number";
	}
	return 0;
}
