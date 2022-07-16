#include<iostream>
#include<string>
using namespace std;

class Account
{
	public:
		Account(int);
		void credit(int);
		void debit(int);
		int getAccountBalance();
		private:
		int accountBalance;
};
		 Account::Account(int balance)
		 {
		if (balance>0)
		{
			accountBalance=balance;
		}
		else 
		{
			accountBalance=0;
			cout<<"initial balance was invalid."<<endl;
		}
	     }
	     
	    void Account::credit(int balance)
	    {
	    	accountBalance= accountBalance+balance;
		}
		void Account::debit(int balance)
		{
			if (accountBalance>=balance)
		{
		accountBalance =accountBalance - balance;
		}
		    else
		{
		cout<<"debit amount exceeded account balance"<<endl;	
		}
	}
		
		int  Account::getAccountBalance()
		{
			return accountBalance;
		}
		


int main()
{
	int a,b,c,d;
	cout<<"enter the credit amount of Account 1: ";
	cin>>a;
	cout<<"enter the credit amount of Account 2: ";
	cin>>b;
	cout<<"enter the debit amount of Account 1: ";
	cin>>c;
	cout<<"enter the debit amount of Account 2: ";
	cin>>d;
	Account a1(300000);
	Account a2(700000);
	cout<<"account 1 has balance is $"<<a1.getAccountBalance()<<endl;
	cout<<"account 2 has balance is $"<<a2.getAccountBalance()<<endl;
	a1.credit(a);
	a2.credit(b);
	cout<<"Account 1 balance after credit is :" <<a1.getAccountBalance()<<endl;
	cout<<"Account 2 balance after credit is :" <<a2.getAccountBalance()<<endl;
	a1.debit(c);
	a2.debit(d);
	cout<<"Account 1 balace after debit is :"<<a1.getAccountBalance()<<endl;
	cout<<"Account 2 balace after debit is :"<<a2.getAccountBalance()<<endl;
	return 0;
}



