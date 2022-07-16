#include<iostream>
#include<string>
using namespace std;

class Account
{
	public:
		 Account::Account(double initialBalance,double balance,double depositAmount)
		if (initialBalance>0)
		{
			balance=initialBalance;
		}
		
		void deposit(double depositAmount)
		{
			if (depositAmount>0)
			balance=balance+depositAmount;
		}
		
		double getBalance()
		{
		return balance;
		}
		
		void setName( string accountName)
		{
			name=accountName;
		}
		
		string getName()
		{
			return name;
		}

		void withdraw ( double withdrawAmount)
		{
			if(withdrawAmount> balance)
			{
				cout<<"withdrawal amount exceeded account balance.";
			}
			else 
			{
				balance=balance-depositAmount;
			}
		void displayAccount(account accountToDisplay)	
		{
			int a;
			cout<<"enter account to display";
			cin>>a;
			if (a==1)
			{
				cout<<"account 1 :"<<a.getName()<<" balance is $"<<a.getBalance()<<endl;	
			}
			else if(a==2)
			{
				cout<<"account 2 :"<<a.getName()<<" balance is $"<<a.getBalance();
				}
			else 
			{
				cout<<"invalid input"
			}
		}
		
		}

};
private:
	string name;
	double balance={0};
}; //class account ends here

int main()
{
	Account a1;
	Account a2;
    Account a;
    Account b;
    a.displayAccount();
	b.displayAccount();
	
	cout<<"Enter deposit amount for account 1";
	double depositAmount;
	cin>>depositAmount;
	cout<<"adding "<<depositAmount<<" to account 1 balance"<<"\n";
	a1.deposit(depositAmount);
	
	a.displayAccount();
	b.displayAccount();
	
	
		cout<<"Enter deposit amount for account 2";
	double depositAmount;
	cin>>depositAmount;
	cout<<"adding "<<depositAmount<<" to account 2 balance"<<"\n";
	a2.deposit(depositAmount);
	
	a.displayAccount();
	b.displayAccount();
	
	cout<<"enter the amount to withdraw from account 1 :";
	double withdrawAmount;
	cin>>withdrawAmount;
	cout<<"your account balance now is :"<<withdrawAmount.withdraw;	
}
