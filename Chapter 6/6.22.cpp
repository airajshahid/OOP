#include<iostream>
using namespace std;

template <typename T>
T add (T a, T b)
{
	return a+b;
}

main()
{
	cout<<add(4.5,6.7);
}
