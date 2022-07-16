#include<iostream>
using namespace std;
int main()
{
	double a[10];
	for(int i=0;i<10;i++)
	{
		cout<<"Enter value of "<<i<<" :";
		cin>>a[i];
		cout<<"\n";
		if(i%2==0)
		{
			a[i]=a[i]+1;
		}
	}
	for(int j=0;j<10;j++)
	{
		cout<<a[j]<<"\n";
	}
	return 0;
}
