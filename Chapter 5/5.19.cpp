#include<iostream>
using namespace std;
int main()
{   
    double c=0;
 	int i;
	for ( i=1;i<=200000;i++)
	{
		if(i%2==0)
		{
			c=c-(4.0/(2*i-1));
		}
		else
		{
			c=c+(4.0/(2*i-1));	
		}
		printf("%f\n",c);
	}
}
