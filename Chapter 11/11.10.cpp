#include<iostream>
#include<string>
using namespace std;
class Account{
	public: 
	double balance;
	Account(double bal)
	{
		if (bal>=0.0)
		{
		balance=bal;}
		else 
		{ balance=0.0;
		cout<<"balance is se to zero due to invalid input ";
		}
	}
	double credit (double cr)
	{
		balance= balance+ cr;
	}
	double debit (double de)
	{
		if (de<=balance)
		{
			balance = balance - de;
		}
		else 
		{
			cout<<"debit amount exceeded account's current balance";
		}
	}
	getBalance(double balance)
	{
		cout<<"your current balance is "<<balance;
	}
	
};
class savingsAccount: public Account
{
	public: 
	double balance, interest;
	savingsAccount(double bal, double inter)
	{
		if (bal>=0.0)
		{
		balance=bal;
		interest = inter;}
		else 
		{ balance=0.0;
		cout<<"balance is set to zero due to invalid input ";
		}
	}
	double credit (double cr)
	{
		balance= balance+ cr;
	}
	double debit (double de)
	{
		if (de<=balance)
		{
			balance = balance - de;
		}
		else 
		{
			cout<<"debit amount exceeded account's current balance";
		}
	}
	double calculateInterest(double bal,double inter)
	{
		balance= balance*(inter/100);
	}
	
	getBalance(double balance)
	{
		cout<<"your current balance is "<<balance;
	}

};
class checkingAccount: public Account
{   double balance, fee; 
	checkingAccount(double bal, double f)
	{
		fee=f;
		if (bal>=0.0)
		{
		balance=bal;}
		else 
		{ balance=0.0;
		cout<<"balance is se to zero due to invalid input ";
		}
	}
	double credit (double cr)
	{
		balance= (balance+ cr)- fee;
	}
	double debit (double de)
	{
		if (de<=balance)
		{
			balance = (balance - de) - fee ;
		}
		else 
		{
			cout<<"debit amount exceeded account's current balance";
		}
    }
	getBalance(double balance)
	{
		cout<<"your current balance is "<<balance;
	}
		
};

main()
{
	Account a;
	a(50000);
	savingsAccount b;
	b(50000,30);
	checkingAccount c;
	c(50000,50);
}
