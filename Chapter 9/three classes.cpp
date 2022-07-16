#include<iostream>
#include<string>
using namespace std;
class uni;
class home;
class work{
	private :
		int sal =1000;
		friend commonFriend( work &w, home &h, uni &u);
};

class home {
	private:
		string ph="0336";
		friend commonFriend( work &w, home &h, uni &u);
};

class uni{
	private:
		int marks=29;
		friend commonFriend( work &w, home &h, uni &u);
};

commonFriend(work &w, home &h, uni &u)
{
    w.sal=2000;
    h.ph= "0300";
    u.marks=30;
	cout<<w.sal<<"\n";
	cout<<h.ph<<"\n";
	cout<<u.marks;	
}

main()
{
home ho;
work wr;
uni mr;
commonFriend(wr,ho,mr);	
}
