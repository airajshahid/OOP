#include<iostream>
using namespace std;
void displayRectangle (int w,int h)
{
	for (int y=1;y<=h;++y)
	{
		for (int x;x<=w;++x)
		cout<<"*";
	}
	cout<<"\n";
}
int main()
{
	int width, height;
	cout<<"enter width and height: ";
	cin>>width>>height;
	if(width<1||height<1)
	{
		cout<<"\n";
    }
		displayRectangle;

}
