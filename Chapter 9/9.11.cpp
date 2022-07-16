#include<iostream>
#include<string>
using namespace std;
class Rectangle {

public:
	float length=1, width=1;
	
	perimeter ();
	area ();
	setlength();
	setwidth();
	
float perimeter (float l, float w)
	{
	float p;
	p=l+w;
	cout<<"perimeter is "<<p;	
	}
float area (float l, float w)
{
  float a;
  a=l*w;
  cout<<"area is "<<a;	
}
//set functions	
float setlength(float l)
{
	cout<<"enter the length :";
	cin>>l;
	if (l>1 && l<20)
	{
		length=l;
	}
	else {
		cout<<"invalid values...please enter between 1 to 20";
	}
}
float setwidth(float w)
{
	cout<<"enter the width :";
	cin>>w;
	if (w>1 && w<20)
	{
		width=w;
	}
	else {
		cout<<"invalid values...please enter between 1 to 20";
	}
}
//get functions
void getlength()
{
	cout<<"length is "<<length;
}

void getwidth()
{
	cout<<"width is "<<width;
}
};

int main()
{
	Rectangle obj;
}

