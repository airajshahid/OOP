#include<iostream>
#include<array>                                          // array(fixed size), vectors(varaible size)
using namespace std;
main()
{
	template <class abc>                                   // array template
	array<int , 10>arr;                                   // same as int a[10];
	
	int a[10];                                           //arrays--linear data structure
	for(int i=0; i<10;i++)
	{
		cout<<"please enter value at index number "<<i<<" ";        
		cin>>a[i];
	}
	for (int j=0;j<10; j++)                              //traversing an array--getting values from array
	{
		cout<<a[j]<<endl;
	}
}
