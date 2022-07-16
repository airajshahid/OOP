#include<iostream>
using namespace std;
// airaj_shahid class defination
class airaj_shahid
{
	public:
		// function that displays a welcome message to the airaj_shahid user
		void myfunction()
		{
			cout<<"Welcome to the my class!"<< endl;
		} //end function myfunction
		
		
		int sqr (int a)   //function for square
		{
			return a*a;
		}
		
		
		int add (int a, int b) //function to add 2 variables
		{
			return a+b;
		}
		
		int table(int a)  //function to get table
		{
			for(int i=1;i<=10;i++)
			{
				cout<<a<<"*"<<i<<"="<<a*i<<"\n";
			}
		    
	   {
			string name;  // function to set name
		setName(string a);
			{
				name=a;
			}
			public:
		getName(string a); //function to get name
			{
			 cout<<name;	
			}
		}
			
		}
		
};//end class airaj_shahid

// function main begins prgram execution
int main()
{
	int x,y,j,k;
	string z;
	cout<<"enter a number to get it's table";
	cin>>x; 
    airaj_shahid abc;
    cout<<abc.table(x);
    
    cout<"enter a number to get it's square";
    cin>>y;
     airaj_shahid ab;
    ab.sqr (y);
    cout<<ab.sqr(y);
    
    airaj_shahid obj; //create a airaj_shahid object named myfunction
    obj.myfunction();
    
    airaj_shahid cv;
    cout<<"enter a name";
    cin>>z;
    cv.setName(a);
    cv.getName();
    
    
} //end main
