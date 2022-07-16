#include<iostream>
#include<string>
using namespace std;
class demo{
	public:
		int account;
		demo(int a)
		{
			account = a;
		}
		demo()
		{
			
		}
			
		};
		
    demo operator - (demo &a, demo &b){  //operator is overloaded
		demo c;               // if it is to be written in class then no parameters should be passed 
		c.account= a.account *b.account;
		return c;
	}                        //* ans :: can't be overloaded
main()
{
	demo a(500);
	demo b(1000);
	demo c;
	c=a-b;
	cout<<c.account;
}
