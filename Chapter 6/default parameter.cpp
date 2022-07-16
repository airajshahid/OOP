#include<iostream>
using namespace std;

int mul(int a=1, int b=1, int c=1, int d=1, int e=1)
{
	return a*b*c*d*e;
}

int main()
{
	cout<<mul(5,5)<<"\n";
	cout<<mul(1,2,3);
}
