#include<iostream>
using namespace std;
int main()
{
 int n=1,a,b;
	while(n<=10)
	{
		for (a=1; a<n;a++)
		{
			cout<<" ";
		}
	
	 for (b=10; b>n;b--)
	 {
	 	cout<<"*";
	 }
	 cout<<"\n";
	 n++;
}
return 0;
}
