#include<iostream>
using namespace std;
int main()
{
	system("color F1");
	char p,v;
	int t,q,bill=0;
	cout<<"                                                                  ************* YUG GROCERY STORE *************";
	up:
	cout<<"\n Press d for Dairy Products \n";
	cout<<"\n Press g for Grains \n";
	cout<<"\n Press s for Snacks \n";
	cout<<"\n Press v for Vegetables \n";
	cin>>p;
	if(p=='d')
	{
		cout<<"\n Press 1 for Milk ";
		cout<<"\n Press 2 for Paneer ";
		cout<<"\n Press 3 for Ghee ";
		cin>>t;
		cout<<"\n Enter Quantity ";
		cin>>q;
		switch(t)
		{
			case 1:bill=bill+(q*60);
			break;
			case 2:bill=bill+(q*100);
			break;
			case 3:bill=bill+(q*400);
			break;
			default:cout<<"\n WRONG ";
		}
		cout<<"\n Press a to buy Again ";
		cin>>v;
		if(v=='a')
		{
			goto up;
		}
	}
	else if(p=='g')
	{
		cout<<"\n Press 1 for Dal ";
		cout<<"\n Press 2 for Flour ";
		cout<<"\n Press 3 for Rice ";
		cin>>t;
		cout<<"\n Enter Quantity ";
		cin>>q;
		switch(t)
		{
			case 1:bill=bill+(q*110);
			break;
			case 2:bill=bill+(q*500);
			break;
			case 3:bill=bill+(q*300);
			break;
			default:cout<<"\n WRONG ";
		}
		cout<<"\n Press a to buy Again ";
		cin>>v;
		if(v=='a')
		{
			goto up;
		}
	}
		else if(p=='s')
	{
		cout<<"\n Press 1 for Cake ";
		cout<<"\n Press 2 for Chips ";
		cout<<"\n Press 3 for Sandwich ";
		cin>>t;
		cout<<"\n Enter Quantity ";
		cin>>q;
		switch(t)
		{
			case 1:bill=bill+(q*250);
			break;
			case 2:bill=bill+(q*10);
			break;
			case 3:bill=bill+(q*20);
			break;
			default:cout<<"\n WRONG ";
		}
		cout<<"\n Press a to buy Again ";
		cin>>v;
		if(v=='a')
		{
			goto up;
		}
	}
		else if(p=='v')
	{
		cout<<"\n Press 1 for Lady Finger ";
		cout<<"\n Press 2 for Capsicum ";
		cout<<"\n Press 3 for Brinjal ";
		cin>>t;
		cout<<"\n Enter Quantity ";
		cin>>q;;
		switch(t)
		{
			case 1:bill=bill+(q*30);
			break;
			case 2:bill=bill+(q*40);
			break;
			case 3:bill=bill+(q*20);
			break;
			default:cout<<"\n WRONG ";
		}
		cout<<"\n Press a to buy Again ";
		cin>>v;
		if(v=='a')
		{
			goto up;
		}
		else
		{
			cout<<"\n YOU HAVE PRESSES WRONG BUTTON";
		}
	}
	cout<<"\n\n Your Total Bill is "<<bill;
	if(bill<2000)
	{
		cout<<"\n NO DISCOUNT ";
	}
	else
	{
		cout<<"\n\n Your Bill after 30% Discount is "<<0.7*bill;	
	}

	return 0;
}
