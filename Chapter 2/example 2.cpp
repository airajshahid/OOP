#include<iostream>
#include<string>
using namespace std;
int main()
{ 
    float feet,inch,c,height;
    string arr;
	cout<<"enter your height ";
	cin>>arr;
	feet=static_cast<float>(arr[0]);
	inch=static_cast<float>(arr[2]);
	c=(feet*12);
	height=(c+inch)*2.54;
	cout<<"your height in centi meters is \n";
	cout<<height;
	return 0;
}
