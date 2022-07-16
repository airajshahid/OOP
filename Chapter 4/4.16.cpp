#include<iostream>
#include<string>
using namespace std;
int main()
{
	float laps;
	float sponsorship, contribution, total;
	cout<<"Enter laps completed (-1 to end):";
	cin>>laps;
	
	while(laps!= -1)
	{
		cout<<"Enter sponsorship rate : ";
		cin>>sponsorship;
		if(laps<=40)
		{
			contribution=(laps*sponsorship);
			cout<<"Student contribution is : "<<contribution<<endl;
		}
		else
		{
		contribution=(laps*sponsorship);
		laps=laps-40;
		contribution=(contribution+(sponsorship*0.5*laps));
		cout<<"Student contribution is : "<<contribution<<endl;
		}
		total=total+contribution;
	    cout<<"Enter laps completed (-1 to end):";
	    cin>>laps;
	
	}
	cout<<"Total funds raised :"<<total;
	return 0;
}
