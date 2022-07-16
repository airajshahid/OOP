#include<iostream>
using namespace std;
bool isFactor(int a, int b)
{
	if (a%b==0||b%a==0)
	{
	   return true;
	}
	else 
	{
		 return false;
	}
}
int main()
{   
    int x,y;
	cout<<" Enter any two integers ";
	cin>>x>>y;
    cout<<isFactor(x,y);
return 0;	
}
