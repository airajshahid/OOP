#include<iostream>
#include<string>
using namespace std;
int main()
{
	int counter=1;
	int units,secondmax,max;
	secondmax=max=0;
	 while (counter <=10)
	 {
	 	cout<<"please enter a number:";
	 	cin>>units;
	 	if(max<units)
	 	{
	 		secondmax=max;
	 		max=units;
		 }
		 counter++;
	 }
	 cout<<"the largest number is "<<max<<endl;
	 cout<<"second largest number is :"<<secondmax;
	 return 0;
}
