#include<iostream>
#include<string>
using namespace std;
class Date{
	public:
		
    Date(int d,int m,int y)
    { void setMonth(m)
      int getMonth();
    
      void setDate(d);
      int getDate();
    	
      void setYear(y);
      int getYear();
      
      void displayDate();
      
    private: 
    int month, day, year;
    };
    
    Date::Date(int d ,int m ,int y )
	
	{
		if(m>0 && m<=12)
		{
		month=m;
	    }
	    else
	    {
	    	month=1;
		}
		date=d;
		year=y;
	}
	
   void Date::setDate(int d)
   {
   	date-d;
   }
	
   void	Date::setMonth (int m)
	{
		if(m>0 && m<=12)
		{
		month=m;
	    }
	    else
	    {
	    	month=1;
		}
	}
	void Date::setYear (int y)
	{
		year=y;
	}
	
	int getDate()
	{
	return date;	
	}
	int getMonth()
	{
		return month;
	}
	int getYear()
	{
		return year;
}
void diplayDate()
{
	
      void setDate(d);
      int getDate();
     void setMonth(m)
      int getMonth();
      void setYear(y);
      int getYear(); 
	  cout<<date<<"/"<<month<<"/"<<year	;
}
}



int main()
{
	int dd,mm,yyyy;
	cout<<"enter date, month and year respectively ";
	cin>>dd>>mm>>yyyy;
	Date Date(dd,mm,yyyy)
	Date.diplayDate();
return 0;
}
