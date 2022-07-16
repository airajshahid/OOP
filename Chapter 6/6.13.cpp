#include<iostream>
using namespace std;
int main()
{   
    double n;
	cout<<"Enter any number and -1 to quit";
	cin>>n;
	while(n!=-1)
	{
		double y= float (n+0.5);
		cout<<"the nearest integer is "<<y;
		cout<<"\n\n";
	cout<<"Enter any number and -1 to quit";
	cin>>n;

	}
}
