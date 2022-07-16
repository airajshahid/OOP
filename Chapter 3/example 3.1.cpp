#include<iostream>
using namespace std;
// gradebook class defination
class GradeBook
{
	public:
		// function that displays a welcome message to the GradeBook user
		void displayMessage()
		{
			cout<<"Welcome to the GradeBook!"<< endl;
		} //end function displayMessage
};//end class GradeBook

// function main begins prgram execution
int main()
{
	GradeBook myGradeBook; //create a GradeBook object named myGradeBook
	myGradeBook.displayMessage();
} //end main
