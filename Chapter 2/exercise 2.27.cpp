#include<iostream>
using namespace std;
int main()
{
	char x;
	cout<<" enter any upper case, lower case or any special character :";
	cin>>x;
	cout<<static_cast<int>(x);
	return 0;
}
