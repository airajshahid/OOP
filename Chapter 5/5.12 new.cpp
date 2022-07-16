#include<iostream>
using namespace std;
int main()
{
	double product=1;
	for (int i=3; i<=50;i+=3)
	{
		product=product*i;
	}
	cout<<product;
	return 0;
}
