#include<iostream>
#include<string>
using namespace std;
int main()
{
	
	for (int r=1;r<=8;r++)
	{
		if (r%2==0)
		{
			cout<<" ";
		}
	for(int c=1;c<=8;c++)
	{
		cout<<"*";
	}
	cout<<endl;
}
return 0;
}
