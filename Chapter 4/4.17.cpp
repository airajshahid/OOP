#include<iostream>
#include<string>
using namespace std;
int main()
{
	int counter=1;
	int units,emp,secondmax,max,emp1; 
	secondmax=max=0;
	 while (counter <=10)
	 {
	 	cout<<"please enter your units for sales# "<<counter<<" ";
	 	cin>>units;
	 	if(max<units)
	 	{
	 		secondmax=max;
	 		emp1=max;
	 		max=units;
	 		emp=counter;
		 }
		 counter++;
	 }
	 cout<<"the maximum units sold are "<<max<<" by salesman "<<emp<<endl;
	 cout<<"the second maximum units sold are "<<secondmax<<" by salesman"<<emp1;
	 return 0;
}
