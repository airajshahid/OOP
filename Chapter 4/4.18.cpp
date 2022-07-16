#include<iostream>
#include<string>
using namespace std;
int main()
{   int x=1;
	cout<<"x"<<"\t"<<"2*x"<<"\t"<<"4*x"<<"\t"<<"8*x"<<"\n";
	while(x<=10)
	{
		cout<<x<<"\t"<<2*x<<"\t"<<4*x<<"\t"<<8*x<<"\n";
		x++;
	}
	return 0;
}
