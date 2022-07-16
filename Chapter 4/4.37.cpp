#include<iostream>
using namespace std;
int main(){

	int number,first,second,third,fourth,remainder,original;
	cout<<"Enter any four digits: ";
	cin>>number;
	original=number;
	remainder=(number%10);
	number=(number/10);
	fourth=remainder;

	remainder=(number%10);
	number=(number/10);
	third=remainder;

	remainder=(number%10);
	number=(number/10);
	second=remainder;

	remainder=(number%10);
	number=number/10;
	first=remainder;

	first=((first+9)%10);
	second=((second+9)%10);
	third=((third+9)%10);
	fourth=((fourth+9)%10);

	cout<<"The text you enterred is: "<<original<<endl;
	cout<<"The text after encryption is : "<<third<<fourth<<first<<second;

}
