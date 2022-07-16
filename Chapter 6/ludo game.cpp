#include<iostream>
#include<ctime>
#include<windows.h>
using namespace std;
 int diceRoll()
	{
		srand (time(0));
		return 1+rand()%6;
	}

int main()
{
char a;
int one=0,two=0;
    for (int i=1; i<=5;i++)
    {

cout<<"Palyer 1: To roll the dice press R :";
cin>>a;
if(a=='r'||a=='R')
{
	one+=diceRoll();
	cout<<diceRoll()<<"\n";
}

cout<<"Palyer 2: To roll the dice press R :";
cin>>a;
if(a=='r'||a=='R')
{
	two+=diceRoll();
	cout<<diceRoll()<<"\n";
}
     }
     cout<<"player 1 score :"<<one<<"\n";
      cout<<"player 2 score :"<<two<<"\n";
      if(one > two)
      {
      	cout<<"player 1 wins";
	  }
	  else
	   {
	  	cout<<"player 2 wins ";
	  }
}

