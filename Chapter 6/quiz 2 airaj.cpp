#include<iostream>
using namespace std;
int main()
{
	char f;
	int n;
   double housing, food, transportation, education, health_care , vacations;
   double tax, total;
   cout<<"enter your bill number and -1 to quit: ";
   cin>>n;
   while (n!=-1)
   {
   cout<<"Enter your housing expenses :";
   cin>>housing;
   cout<<"Enter your food expenses :";
   cin>>food;
   cout<<"Enter your transportation expenses :";
   cin>>transportation;
   cout<<"Enter your education expenses :";
   cin>>education;
   cout<<"Enter your health care expenses :";
   cin>>health_care;
   cout<<"Enter your vacations expenses :";
   cin>>vacations;
   total=(housing+food+transportation+education+health_care+vacations);
   cout<<"if you support fair tax method enter F if not enter any other character";
   cin>>f;
   if (f=='f'||f=='F')
   {
   tax=(total*0.23);
   }
   else 
   {
   tax=(total*0.30);
   }
   cout<<"your total tax is :"<<tax<<"\n\n\n";
  cout<<"enter your bill number and -1 to quit: ";
   cin>>n; 
   
}
}

