//Exception handling (mistakes by user in entering data)
/* try
    {throw
    }
catch(){
}
*/
#include<iostream>
#include<string>
using namespace std;
main()
{
	float a, b;
	cout<<"Please Enter another number : ";
	 cin>>a;
	cout<<"Please Enter another number : ";
	cin>>b;
	try{
		if(b==0)
		{
			throw 1;           // throw can be a string r number // used to call catch function
		}
	}
	catch (int v)
	{
		if(v==1)
		{
			cout<<"you set b = 0, Please Enter Again\n";
				cout<<"Please Enter another number :";
	            cin>>b;
		}
		
	}
	cout<<"Division of two numbers is : "<<a/b;
}
