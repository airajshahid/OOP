//Exception handling (mistakes by user in entering data , error handling)
/* try{
}
throw{
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
	cout<<"Please Enter a number :";
	cin>>a;
	cout<<"Please Enter another number :";
	cin>>b;
	while(a==0 || b==0)
	{
	try{
		if(a==0 && b==0)
		{
			throw 3;
		}
		else if(b==0)
		{
			throw 1;           // throw can be a string r number // used to call catch function
		}
		else if(a==0)
		{
			throw 2;
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
		else if(v==2)
		{
			cout<<"you set a = 0, Please Enter Again\n";
				cout<<"Please Enter another number :";
	            cin>>a;
		}
		else if (v==3)
		{
			
			cout<<"you set a = 0 and b = 0, Please Enter Again\n";
			cout<<"Please Enter another number :";
	            cin>>a;
			cout<<"Please Enter another number :";
	            cin>>b;
		}
			
	}
	cout<<"Division is : "<<a/b;
}
}
