#include<iostream>
#include<ctime>
using namespace std;

int rolldice (int a)
{
	if (a==1)
	{ 
		srand(time(0));
		return 1+rand()%6;
	}
	else if (a==2)
	{
		srand(time(0));
	    return 2+rand()%11;	
	}
}

int main()
{
	string player1, player2;
	int winscore, dice, player1scr=0, player2scr=0;
	cout<<"enter player 1 name :";
	cin>>player1;
	cout<<endl;
	cout<<"enter player 1 name :";
	cin>>player2;
	cout<<endl;
	cout<<"please enter winscore: ";
	cin>>winscore;
	cout<<endl;
	cout<<"please enter number of dice :";
	cin>>dice;
	cout<<endl;
	
	int pl1,pl2;
	char r;
	
	// loop foe entering user scorea and dice
	while (player1scr<=winscore && player2scr<=winscore)
	{
	    cout<<player1<<" It's your turn press R ";
	    cin>>r;
	    pl1=rolldice(dice);
	    cout<<player1<<" your dice score is :"<<pl1<<endl; 
	 	player1scr+=pl1;
	 	if(player1scr==2)
	 	{
	 		cout<<"comgratulations you unlock a ladder worth 36 ";
	 		player1scr+=36;
	 		cout<<endl;
		 }
		else if(player1scr==4)
	 	{
	 		cout<<"comgratulations you unlock a ladder worth 10 ";
	 		player1scr+=10;
	 		cout<<endl;
		 }
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 	cout<<player1<<" your total score is"<<player1scr<<endl;
	 	
	 	//player 2
	 		cout<<player2<<" It's your turn press R ";
        	cin>>r;
	        pl2=rolldice(dice);
	        cout<<player2<<" your dice score is :"<<pl2<<endl; 
	 	    player2scr+=pl2;
	 	    cout<<player2<<" your total score is"<<player2scr<<endl;
	}
	
	if(player1scr>player2scr)
	{
		cout<<"CONGRATULATIONS "<<player1<<" YOU WIN "<<endl;
	}
	else
	 {
	cout<<"CONGRATULATIONS "<<player2<<" YOU WIN "<<endl;	
	}
}
