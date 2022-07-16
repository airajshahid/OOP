#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
		cout<<"enter the size of the square you want to print between 1 to 20 :";
	    cin>>n;
	if (n>=1 && n<=20)
	{
		for (int i=1;i<=n; i++)
		{
			if (i==1||i==n)
			{
				for(int j=1;j<=n;j++)
			    {
				cout<<"*";
				}
				cout<<"\n";
			}
			else
			{
				cout<<"*";
				for(int k=2;k<=n-1;k++)
				cout<<" ";
				cout<<"*";
				cout<<"\n";
			}
		}
	}
	else 
	{
	cout<<"you didn't enter size between 1 to 20 ";	
	}
}
