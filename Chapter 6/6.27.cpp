#include<iostream>
using namespace std;
double smallest(double a, double b, double c)
{
	double min;
	if (a<b)
	{
		if(a<c)
		{
			min=a;
		}
	}
	else if (b<c)
	{
		min=b;
	}
	else {
		min=c;
	}
	return min;
}
int main()
{
      double n1,n2,n3,small;
      cout<<"enter any three decimal values: ";
      cin>>n1>>n2>>n3;
      small=smallest(n1,n2,n3);
      cout<<"smallest number is "<<small;
}
