#include<iostream>
using namespace std;

int add(int a=0, int b=0, int c=0, int d=0, int e=0)
{
	return a+b+c+d+e;
}

int main()
{
	cout<<add(5,5)<<"\n";
	cout<<add(1,2,3);
}
