#include<iostream>
#include<string>
using namespace std;

class HeartProfile
{
	private:
		string firstName, lastName,Gender;
		int birthDay, birthMonth, birthYear, currentDay,currentMonth,currentYear;
		int age;
		double MaxHeartRate, targetRate;
		float Height,Weight,bmi;
		
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
		if ((birthDay<0|| birthDay>31)&&(birthMonth<0||birthMonth>12))
		{
			cout<<"invalid date of birth entered"<<endl<<"re-enter your date of birth";
			cout<<"your date of birth in format dd/mm/yyyy is: "<<birthDay<<"/"<<birthMonth<<"/"<<birthYear<<"\n";
		}
		cout<<"enter height in inches ";
		cin>>Height;
		cout<<"enter your weight in pounds:";
		cin>>Weight;
		cout<<endl;
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
	
	void getbmi()
	{
		bmi=((Weight)*703)/((Height)*(Height));
		cout<<"your BMI is :"<<bmi;
	}
};
void BMI_Chart();

int main()
{
	HeartProfile airaj;
	airaj.info();
	airaj.getAge();
	cin.ignore();
	cin.get();
	airaj.getMaximumHeartRate();
	airaj.getTargetHeartRate();
	airaj.getbmi();
	cout<<"\n";
	BMI_Chart();
	system("wait");
	return 0;
}
	
	void BMI_Chart()
	{
		cout<<endl<<"*********************************************************"<<endl;
	    cout<<"BMI Values"<<endl;
	    cout<<"under weight:"<<"les than 18.5"<<endl;
	    cout<<"normal :"<<"between 18.5 and 24,9"<<endl;
	    cout<<"overWeight :" <<"betwween 25 and 29.9"<<endl;
	    cout<<"obese :"<<"30 or greater"<<endl;
	    cout<<endl<<"*********************************************************"<<endl;
    }
