#include<iostream>
#include<array>
using namespace std;
int main()
{
	int a [3][4];
	int c=1;
	for (int row=0; row<3; row++)
	{
		for(int col=0; col<4; col++) 
		{
			a [row][col]=c;
			c++;
		}
	}
	
	//array for printing 2D arrray
		for (int row=0; row<3; row++)
	{
		for(int col=0; col<4; col++) 
		{
			cout<<a [row][col]<<"\t";
		}
		cout<<"\n";
	}
}
