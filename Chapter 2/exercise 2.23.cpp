#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cout<<"enter any five integers";
	cin>>a>>b>>c>>d>>e;
	if(a>b)
	{
		if (a>c)
		{
			if (a>d)
			{
				if(a>e)
				{
					cout<<a<<" is largest \n";
				}
			}
		}
	}
	else if (b>c)
	{
	    if (b>d)
		{
			if(b>e)
			{
				cout<<b<<" is largest \n";
			}	
		}	
	}
	else if(c>d)
	{
		if (c>e)
		{
			cout<<c<<" is largest \n";
		}
	}
	else if(d>e) 
	{
		cout<<d<<" is largest \n";
	}
	else
	{
		cout<<e<<" is largest \n";
	}
	 
	 
	 
    if (a<b)
	{
		if (a<c)
		{
			if (a<d)
			{
				if(a<e)
				{
					cout<<a<<" is smallest";
				}
			}
		}
	}
	else if (b<c)
	{
	    if (b<d)
		{
			if(b<e)
			{
				cout<<b<<" is smallest";
			}	
		}	
	}
	else if(c<d)
	{
		if (c<e)
		{
			cout<<c<<" is smallest";
		}
	}
	else if(d<e) 
	{
		cout<<d<<" is smallest";
	}
	else
	{
		cout<<e<<" is smallest";
	}	
return 0;
}
