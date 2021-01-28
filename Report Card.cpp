#include<iostream>  
using namespace std;
int main()
{
	system("color F9");
	cout<<"                                        REPORT CARD";
	long long int a,b,c,d,e;
	string YUGANK;
	cout<<"\n Enter Your Name ";
	cin>> YUGANK;
	cout<< "\n Enter Your Marks In Science ";
	cin>>a;
	cout<<"\n Enter Your Marks In Maths ";
	cin>>b;
	cout<<"\n Enter Your Marks In English ";
	cin>>c;
	d=a+b+c;
	cout<<"\n Hello"<< YUGANK<<" Your Total Marks is "<<d<<" out of 300";
	e=d/3;
	cout<<"\n"<<YUGANK<< "Your Percantage Is "<<e<<"%";
	if (e>=90)
	{
		cout<<"\n"<<YUGANK<< "BOOYAH! YOU GOT A+ GRADE ";
		cout<<"\n"<<YUGANK<< "CONGRATULATIONS!";
	 }
	 else if (e>=80 && e<90)
	 {
	 	cout<<"\n"<<YUGANK<< "YOU GOT B GRADE ";
	  }
	  else if (e>=70 && e<80)
	  {
	  	cout<<"\n"<<YUGANK<< "YOU GOT C GRADE ";
	   } 
	   else
	   {
	   	cout<<"\n"<<YUGANK<< "YOU ARE FAIL AND YOU GOT D ";
	   }
	return 0;
}
