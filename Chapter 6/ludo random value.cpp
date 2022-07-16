#include<iostream>
using namespace std;

main()
{ 

for(int i=1;i<=10;i++)
{
    //seed value
    srand(i);
	//random number
	cout<<1+rand()%6<<endl;         //% is used to restrict it to less than 6 and 1 is added to exclude 0
}        

}
