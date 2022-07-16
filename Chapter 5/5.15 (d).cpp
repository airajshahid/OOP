#include<iostream>
using namespace std;
int main()
{
 int i, j, s;
 for (i=1;i<=10;i++)
 {
 	for (s=1;s<=10-i;s++)
 	 cout<<" ";
 	 for (j=1;j<=i;j++)
 	 cout<<"*";
 	 cout<<endl;
 }

}
