#include<iostream>
#include<string>

using namespace std;
int main()
{
	for(int i; i<=9; i++)
	{
			if(i==1||i==9) 
			{
		cout<<"#########";
		cout<<"\n";
	    }
	    else
	    {
	    	cout<<"#";
	    	for(int j=7;j>=1;j-=2)
	    	{
	    		cout<<"*";
	    		if(j==1)
	    		{
	    		for(int k=3;k<=7;k+=2)
				{
					cout<<"*";
					}
					break;	
				}
			}
	    	
	    	
	    	cout<<"#";
	    	cout<<"\n";
	    }
	}
}

