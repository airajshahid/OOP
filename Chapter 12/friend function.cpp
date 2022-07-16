#include<iostream>
using namespace std;
class demo{
	private:
		int account = 1500000;
		friend humaradost(demo &d);
};

humaradost(demo &d)
{
    d.account= 10;
	cout<<d.account;
}
main(){
	demo d;	
	humaradost(d);
}
