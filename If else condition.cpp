#include<iostream>
using namespace std;
int main()
{
	system("color E2");
	int y;
	cout<<"                                            WELCOME TO FAST FOOD RESTAURANT";
	cout<<"\n Press 1 if you want DOSA";
	cout<<"\n Press 2 if you want IDLI";
	cout<<"\n Press 3 if you want BOTH \n";
	cout<<"     ";
	cin>> y;
	if(y==1)
	{
		cout<<"\n Your Bill is 100$";
	}
	else if (y==2)
	{
		cout<<"\n Your Bill is 50$";
	}
	else if (y==3)
	{
		cout<<"\n Your Bill is 150$";
	}
	else
	cout<<"\n         You Have Pressed Wrong Button! \n         Please Try Again!";
	cout<<"\n                                                THANK YOU FOR COMING!";
	 return 0;
	
 } 
 
