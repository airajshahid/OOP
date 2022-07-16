#include<iostream>
#include<string>
using namespace std;
int main()
{
	int account_no;
	float balance,total_charges,total_credits,credit_limit,new_balance;
	cout<<"enter account number (or -1 to quit)";
	cin>>account_no;
	
	while(account_no != -1)                                       //checking while condition
	{
		cout<<"enter the beginning balance :";
		cin>>balance;
		cout<<"enter total charges: ";
		cin>>total_charges;
		cout<<"enter total credits:";
		cin>>total_credits;
		cout<<"enter credit limit :";
		cin>>credit_limit;
		
		new_balance=(balance+total_charges)-total_credits;             //formula for new balance
		cout<<"your new balance is "<<new_balance<<endl;
		cout<<"account number "<<account_no<<endl;
		cout<<"credit limit "<<credit_limit<<endl;
		cout<<"balance is "<<new_balance<<endl;
		
		if(credit_limit<new_balance)                                 //credit limit condition
		cout<<"credit limit exceeded"<<endl;
		
	cout<<"\n\n";	
	cout<<"enter account number (or -1 to quit)";
	cin>>account_no;
	}
	return 0;
	
}
