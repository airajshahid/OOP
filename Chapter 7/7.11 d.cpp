#include<iostream>
using namespace std;
int main()
{
	double a[10];
	for(int i=0;i<10;i++)
	{
		cout<<"Enter value of "<<i<<" :";
		cin>>a[i];
	}
	for(int j=0;j<=4;j++)
	{
	cout<<a[j]<<"\t";
    }
    cout<<"\n";
    for(int k=5;k<=9;k++)
    {
    	cout<<a[k]<<"\t";
	}
	return 0;

}
