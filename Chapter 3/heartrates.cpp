#include<iostream>
#include<string>
using namespace std;

class HeartRates
{
	private:
		string firstName, lastName;
		int birthDay, birthMonth, birthYear, currentDay,currentMonth,currentYear;
		int age;
		double MaxHeartRate, targetRate;
		
	public:
	
	void info()
	{
		cout<<"please enter your first name ";
		getline (cin, firstName);
		cout<<"\n";
		cout<<"please enter your last name ";
		getline (cin, lastName);
		cout<<"\n";
		cout<<"please enter your date of bith ";getline (cin, firstName);
		cout<<"year";
		cin>>birthYear;
			cout<<"month";
		cin>>birthMonth;
			cout<<"day";
		cin>>birthDay;
		cout<<"data for "<<firstName<<" "<<lastName<<endl;
		cout<<"your date of birth in format dd/mm/yyyy is: "<<birthDay<<"/"<<birthMonth<<"/"<<birthYear<<"\n";
		}
	
	void getAge()
	{
	cout<<"	enter curent date month and year respectively \n";
	cin>>currentDay>>currentMonth>>currentYear;
	if(currentYear>=birthYear)
	{
		age=(currentYear-birthYear)-1;
		cout<<"your age is :"<<age;
	}
	else
	{
		cout<<"invalid Date of Birth";
	}
	}
	
	void getMaximumHeartRate()
	{
		MaxHeartRate= 220-age;
		cout<<" your Maximum Heart Rate is :"<<MaxHeartRate<<endl;		
		}	
		
	void getTargetHeartRate()
	{
		targetRate= MaxHeartRate*0.60;
		cout<<"your target heart rate is "<<targetRate<<endl;	
	}
};


int main()
{
	HeartRates airaj;
	airaj.info();
	airaj.getAge();
	cin.ignore();
	cin.get();
	airaj.getMaximumHeartRate();
	airaj.getTargetHeartRate();
	cout<<"\n";
	return 0;
}
