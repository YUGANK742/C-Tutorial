#include<iostream>
using namespace std;
int main ()
{
	system ("color F8");
	cout<<"                                                 Calculator";
	long long int a,b,c;
	x:
	cout<<"\n Enter 1st Number ";
	cin>> a;
	cout<<"\n Enter 2nd Number ";
	cin>> b;
	cout<<"\n Press 1 for Multiply ";
	cout<<"\n Press 2 for Divide ";
	cout<<"\n Press 3 for Addition ";
	cout<<"\n Press 4 for Subtraction ";
	cout<<"\n Press 5 for Remainder ";
	cout<<"\n Press 6 for Percentage \n";
	cin>> c;	
	if (c==1)
	{
		cout<<"\n The Multiplication Is "<<a*b;
	}
	else if (c==2)
	{
		cout<<"\n Your Division is "<<a/b;
	}
	else if (c==3)
	{
		cout<<"\n Your Addition is "<<a+b;
	}
	else if (c==4)
	{
		cout<<"\n Your Subtraction is "<<a-b;
	}
	else if (c==5)
	{
		cout<<"\n Your Remainder is "<<a%b;
	}
	else if (c==6)
	{
		cout<<"\n Your Percentage is "<<(a+b)/2<<"%";
	}
	else 
	{
		cout<<"\n SORRY YOU HAVE PRESSED WRONG BUTTON";
		cout<<"\n PLEASE TRY AGAIN";
	}
	string z;
	cout<<"\n\n Press r To Continue and Press q To Exit ";
	cin>> z;
	if (z=="r")
	{
		goto x;
	}
	else if (z=="q")
	{
		exit (0);
	}
	return 0;
}
