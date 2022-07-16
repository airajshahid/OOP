#include<iostream>
using namespace std;
main()
{
	int a[10];                                           //arrays--linear data structure
	for(int i=0; i<10;i++)
	{
		cout<<"please enter value at index number "<<i<<" ";
		cin>>a[i];
	}
	for (int j=0;j<10; j++)
	{
		cout<<a[j]<<endl;
	}
}
