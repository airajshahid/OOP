#include<iostream>
#include<string>
using namespace std;
class work;
class home
{
	private:
		string bike = "Honda";
		string mobile = "Samsung";
	public:
		string name= "Airaj";
	friend dost (work &obj2, home &obj);
};

class work
{
	private:
		string job = "IT";
		friend dost (work &obj2, home &obj);
};

dost ( work &obj2, home &obj)
{
	obj.bike = "Suzuki";
	obj2.job = "data scientist";
	cout<<obj2.job;
	cout<<obj.bike;
}
int main()
{
	work obj2;
	home h;
	h.bike = "";
}
