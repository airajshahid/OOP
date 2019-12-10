#include<iostream>
using namespace std;
int main()
{
	int a,b,c,sum,product, lar, small;
	float average;
	cout<<"Enter any three integers";
	cin>>a>>b>>c;
	sum=a+b+c;
	product=a*b*c;
	average=(sum/3);
	cout<<"sum is :"<<sum<<endl<<"product is :"<<product<<endl<<"average is :"<<average<<endl;
	if(a>b)
	{
		if(a>c)
		{
			cout<<a<<" is the largest";
		}
	
	}
	else if (b>c)
	{
	cout<<b<<" is largest";	
	}
	else
	{
		cout<<c<<" is largest";
	}
	
	if(a<b)
	{
		if(a<c)
		{
			cout<<a<<" is smallest";
		}
	else if (b<c)
		{
		cout<<b<<" is smallest";
		}	
	else 
	{
		cout<<c<<" is smallest";
	}
	return 0;
	}
}
