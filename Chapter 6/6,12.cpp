#include<iostream>
using namespace std;
float calculateCharges(int car,float hoursParked)
{
	float bill,total;
	if(hoursParked>=3)
	{
		bill=20.00*hoursParked;
	}
	else 
	{
		bill=(20.00*hoursParked)+(5*(hoursParked-3));
	}
	cout<<car<<"\t"<<hoursParked<<"\t"<<bill<<endl;
	total=total+bill;
	cout<<"total is :"<<total<<endl;
}
int main()
{
	int c;
	float h;
	cout<<"enter car number: ";
	cin>>c;
	while(c!=-1)
	{
	cout<<"enter hours parked:";
	cin>>h;
	cout<<"Car"<<"\t"<<"Hours"<<"\t"<<"Charges"<<endl;
	calculateCharges(c,h);
	
	cout<<"enter car number: ";
	cin>>c;
    }

	
}
