#include<iostream>
using namespace std;
int main()
{
	int radius;
	float diameter,circumference,area;
	cout<<"enter an integer as the radius of a circle";
	cin>>radius;
	diameter=2*radius;
	circumference=2*(3.14159)*radius;
	area=(3.14159)*radius*radius;
	cout<<"Diameter of circle is :"<<diameter<<endl;
	cout<<"Circumference of circle is :"<<circumference<<endl;
	cout<<"Area of circle is :"<<area;
	return 0;
}
