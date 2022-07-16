#include<iostream>
using namespace std;
int main()
{
	cout<<"type any five number between 1 to 9"<<endl;
	for (int i=1; i<=5; ++i)
	{
		int number;
		cin>>number;
		if (number<1 || 9<number)
		{
			cout<<"number"<<number<<"out of range!"<<endl;
			continue;
		}
		cout<<endl;
		for( int j=1; j<=2; ++j)
		{
			for (int k=1; k<=number; ++k )
			cout<<number;
			cout<<endl;
		}

	}
	return 0;
}
