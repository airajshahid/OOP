#include<iostream>
using namespace std;
int main()
{
	int c=8;
	while(c<=1)
	{
		if(c%4==0)
		{
			cout<<" &&& "<<endl;
		}
		else
		{
		cout<<" @@@@@ "<<endl;
		}
		--c;
	}
	return 0;
}
