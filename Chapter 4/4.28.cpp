#include<iostream>
using namespace std;
 int main()
 {
 	int bin,dec=0,num=1;
 	cout<<"Binary Number :";
 	cin>>bin;
 	while (bin)
 	{
 		dec=dec+(bin % 10)*num;
 		num=num*2;
 		bin=(bin/10);
	 }
 	cout<<"equivalent in decimal system is "<<dec<<"\n";
 	return 0;
 }
