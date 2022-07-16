#include<iostream>
#include<string>
using namespace std;

class home;
class work{
	private :
		int sal =1000;
		friend commonFriend( work &w, home &h);
};

class home {
	private:
		string ph="0336";
		friend commonFriend( work &w, home &h);
};

commonFriend(work &w, home &h)
{
    w.sal=2000;
    h.ph= "0300";
	cout<<w.sal<<"\n";
	cout<<h.ph;	
}

main()
{
home ho;
work wr;
commonFriend(wr,ho);	
}
