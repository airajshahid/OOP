#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n=1;
	float kms_per_litre, total;
	float fuel_used,kms;
	cout<<"Enter the no. of kilometers travelled in this trip (-1 to quit)";
	cin>>kms;
	while(kms!=-1)
	{
	cout<<"Enter the fuel consumed (litres) in this trip ";
	cin>>fuel_used;
	kms_per_litre=(kms/fuel_used);
	cout<<"kilometers per litres this trip : "<<kms_per_litre<<"\n";
	total=((total+kms_per_litre)/n);
	cout<<"total kms per litre: "<<total<<"\n";
	n++;
	cout<<"\n \n";
	cout<<"Enter the no. of kilometers travelled in this trip (-1 to quit) ";
	cin>>kms;
    }
	return 0;
}
