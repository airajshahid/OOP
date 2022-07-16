#include<iostream>
using namespace std;
int main()
{
	int r {1};
	int c;
	while (r<=8)
	{
		c=4;
		while (c>=1)
		{
		if (r%4==0)
		{
		cout<<"<-------->";
	    }
		else if (c%2==0)
		{
		cout<<"@@";
	    }
		--c;
	}
	++r;
	cout<<endl;
}
return 0;
}
