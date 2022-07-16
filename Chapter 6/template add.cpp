#include<iostream>
using namespace std;

int add(int a=0, int b=0, int c=0, int d=0, int e=0)
{
	return a+b+c+d+e;
}
template <class t1>
t1 add (t1 a, t1 b, t1 c)
{
	return a+b+c;
}

int main()
{
	cout<<add(5,5)<<"\n";
	cout<<add(1,2,3)<<endl;
	cout<<add(1,2,3,4)<<endl;
	cout<<add(2.5,4.3,3.3);
}
