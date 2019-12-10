#include<iostream>
using namespace std;
int main()
{
	cout<<"Side of "<<"\t"<<"Perimeter of "<<"\t"<<"Area of "<<"\n";
	cout<<"square (cm)"<<"\t"<<"square (cm)"<<"\t"<<"square (cm^2)"<<"\n";
	for(int i=1;i<=5;i++)
	{
		cout<<i<<"\t\t"<<4*i<<"\t\t "<<i*i<<"\n";
	}
	return 0;
	
}
