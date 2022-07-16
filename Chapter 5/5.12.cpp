#include<iostream>
using namespace std;
int main()
{
	int n=2,product=1;
	while(n<=10)
	{
		if(n%2==0)
		product=product*n;
		n++;
	}
	cout<<"product of even numbers from 2 to 10 is :"<<product;
	return 0;
}
