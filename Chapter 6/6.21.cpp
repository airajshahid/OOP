#include<iostream>
using namespace std;
bool isMultiple3(int a)
{
	if (a%3==0)
	{
		cout<<true<<endl;
	}
	else
	{
		cout<<false<<endl;
	}
}
int main()
{
	int i;
	while (i!=-1)
	{
		cout<<"enter a number and -1 to quit";
		cin>>i;
		isMultiple3(i);
	}
}
