#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	cout<<0+rand()%5*3<<"\n";
	cout<<3+rand()%6*2<<"\n";
	cout<<6+rand()%4*4;
}
