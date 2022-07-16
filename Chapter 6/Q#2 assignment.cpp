#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class DollarAmount                            //class DollarAmount
{
	public:
		double amount;
		double dollar,cents;                  //DollarAmount with dollar and cents data members (5.33)
	public:
	    DollarAmount(double dlr,double cnt)             //constructor which initializes amount
		{
			dollar=dlr;
			cents=cnt/;
			amount = dollar+cents;                      // contructor enhancement (5.30)
		}
	double add (DollarAmount a)
	{
		amount=amount+ a.amount;
	}
	double subtract (DollarAmount a)
	{
		amount=amount- a.amount;
	}
	
	void addInterest(int rate,int divisor)
	{
		DollarAmount Interest                                              //DollarAmount with Bnaker's Rounding (5.32)
		{
		  (amount * rate + divisor / 2)/divisor;
		}
		addition(Interest);
	}
	
	string toString()  
	{
		string dollars=a_string( amt/100);
        string cents=a_string((amt%100));
        string streturn;
        if(cents==1)
		{
        streturn=dollars+"."+"0"+cents;	
		}
        else
        {
        	streturn=dollars+"."+" "+cents;
		}
	return streturn;
	}
	
	double divide (int d)                        //a divide function enhancement (5.31)
	{
		amount=(amount/d);
	}
};

int main()
{
 
    DollarAmount obj1=17000;
    DollarAmount obj2=15000;
    int rate=0;
    int divisor=0;
    DollarAmount balance=500000;
    
    cout<<"After adding second amount to first then our result is : "<<endl;
    obj1.addition(obj2);
    cout<<obj1.toString()<< "\n";
    
    cout<<"After subtracting second amount from first our result is : "<<endl;
    obj1.subtraction(obj2);
    cout<<obj1.toString()<< "\n";
      
	  //displaying the interest rate in DollarAmount (5.35)    
    cout<<"Enter Interst rate and Divisor such that (for 2% you should enter 2 100\n"<<endl;
    cout<<"Enter Interest rate and Divisor such that (for 2.1% you should enter 21 1000\n"<<endl;
    cout<<"Enter Interest rate and Divisor such that (for 2.11% you should enter 211 10000\n"<<endl;

    cout<<"Enter Interest rate and Divisor such that (for 2.111% you should enter 2111 100000\n"<<endl;
    cout<<"Enter rate and Divisor : ";
	cin>>rate>>divisor;
    cout<<"Initial Balance : "<<balance.toString()<<endl;
    cout<<" Year :         "<<"  Amount on Deposit :"<<endl;
    for(int i=1;i<=10;i++)
    {
    balance.addInterest(rate,divisor);
	cout<< i <<"              " << balance.toString() <<endl;
}
    return 0;	
}
