#include<iostream>
#include<string>
#include"3.15.cpp"
using namespace std;

int main()
{
	string fn,ln;
	int d,y,m;
	cout<<"please enter your first name & last name ";
	cin>>fn>>ln;
	cout<<"enter your DOB in order  (day, month and year) ";
	cin>>d>>m>>y;
	HeartRates obj(fn,ln,d,m,y);
	obj.print();
	
return 0;
}
