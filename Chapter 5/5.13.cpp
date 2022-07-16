#include<iostream>
using namespace std;
int main()
{
	long factorial=1;
	cout<<"integer"<<"\t"<<"factorial \n";
	for (int n=1; n<=20; n++)
	{
		factorial=factorial*n;
		cout<<n<<"\t"<<factorial<<" \n";
	}
	return 0;
}
