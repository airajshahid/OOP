#include<iostream>
#include<ctime>
#include<windows.h>                //have the function to delay the time
using namespace std;

main()
{ 
cout<<time(0);                     // tells seconds passed till now from 1970
for(int i=1;i<=10;i++)
{
    //seed value
    srand(time(0));
	//random number
	cout<<1+rand()%6<<endl;         //% is used to restrict it to less than 6 and 1 is added to exclude 0
	Sleep(1000);                    // delays the time so that for loop can't be operated in one second as whole
}        

}
