#include<iostream>
using namespace std;
long integerPower (int a, unsigned b)
{
	long total=1;
	for (int n=1;n<=b;n++)
	{
	total=(total*a);
	return total;
    }
}
int main()
{
    int base; unsigned ex;
	cout<<"enter base first and then exponent :";
	cin>>base>>ex;
	cout<<"result is :"<< integerPower(base, ex);
	return 0; 	
}
