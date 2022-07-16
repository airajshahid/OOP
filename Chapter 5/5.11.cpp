#include<iostream>
using namespace std;
int main()
{
	int n, number;
	cout<<"how many numbers you want to enter? ";
	cin>>n;
	int counter=1 , min;
	 while (counter <=n)
	 {
	 	cout<<"please enter number "<<counter<<" ";
	 	cin>>number;
	 	
	 	if(min>number)
	 	{
	 		min=number;
	    }
		 counter++;
	 }
	 cout<<"the minimun number enterred is "<<min<<endl;
	 return 0;
}
