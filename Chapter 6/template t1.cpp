#include<iostream>
using namespace std;

template <class t1>
t1 add (t1 a, t1 b, t1 c, t1 d, t1 e)
{
	return a+b+c+d+e;
}

main()
{
	cout<<add (1,2,3,4,5)<<endl;
	cout<<add(2.5,4.6,3.3,4.3,5.1);
}
