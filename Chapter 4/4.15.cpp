#include<iostream>
#include<string>
using namespace std;
int main()
{    
    float worked_hours, leave;
	cout<<"Enter number of hours worked (-1 to end) :";
	cin>>worked_hours;
	while(worked_hours!=-1)
	{
		leave=(worked_hours/10)+2;
		cout<<"accrued leave :"<<leave<<" hours ";
		cout<<"\n \n";
		cout<<"Enter number of hours worked (-1 to end) :";
      	cin>>worked_hours;
	}
return 0;
}
	
