#include<iostream>
#include<math.h>
using namespace std;
double hypotenuse(double p1,double b1)
{
	int h1;
	h1= sqrt((p1*p1)+(b1*b1));
	return h1;
}
int main()
{
     cout<<"Triangle"<<"\t"<<"hypotenuse"<<"\n";
     cout<<"1"<<"\t\t"<< hypotenuse(3.0,4.0)<<"\n";
     cout<<"2"<<"\t\t"<< hypotenuse(5.0,12.0)<<"\n";
     cout<<"3"<<"\t\t"<< hypotenuse(8.0,15.0)<<"\n";
}
