#include<iostream>
using namespace std;
int main()
{
	int s,t;
	cout<<"enter any 4-digit  integer number";
	cin>>s;
	t=s/1000;
	s=s%1000;
	cout<<t;
	t=s/100;
	s=s%100;
	cout<<"  "<<t;
	t=s/10;
	s=s%10;
	cout<<"  "<<t;
	cout<<"  "<<s;
	return 0;
}
