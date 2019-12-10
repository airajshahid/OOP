#include<iostream>
using namespace std;
int main()
{ 
    float inch, feet, centi,x;
	cout<<"enter your height in feet \n";
	cin>>feet;
	cout<<"enter your height in inches \n";
	cin>>inch;
	x=feet*12;                                   
	centi=(inch+x)*2.54;
	cout<<"your height in centi meters is \n";
	cout<<centi;
	return 0;
}

