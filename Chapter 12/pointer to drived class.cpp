//pointer to derived class
#include<iostream>
#include<string>
using namespace std;
class Data{
	public:
		int len=10;
		int wid= 5;
};
class square : public Data
{
	public: 
	area()
	{
		cout<<"area of triangle is "<<len*wid;
	}
};
main()
{
	square s;
	square *p = &s;
	p->area();
}

