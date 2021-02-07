#include<iostream>
using namespace std;
int main()
{
	system("color F9");
	cout<<"                                          *****  WELCOME TO YUGANK SHOPPING STORE *****";
	char p,a,v,q;
	long long int t,bill=0;
	up:
	cout<<"\n Press n for Children \n";
	cout<<"\n Press b for Boys \n";
	cout<<"\n Press g for Girls \n";
	cout<<"\n Press d for Dairy Products \n";
	cout<<"\n Press r for Grains \n";
	cout<<"\n Press s for Snacks \n";
	cout<<"\n Press c for Cosmetics \n";
	cout<<"\n Press v for Vegetables \n";
	cin>>p;
	if(p=='n')
	{
		cout<<"\n Press 1 for Shirts ";
		cout<<"\n Press 2 for Pants ";
		cout<<"\n Press 3 for Cap";
		cin>>t;
		cout<<"\n Enter Quantity ";
		cin>>q;
		switch(t)
		{
			case 1:bill=bill+(q*800);
			break;
			case 2:bill=bill+(q*1000);
			break;
			case 3:bill=bill+(q*100);
			break;
			default:cout<<"\n WRONG ";
		}
		cout<<"\n Press a to buy again ";
		cin>>v;
		if(v=='a')
		{
			goto up;
		 } 
	}
	else if(p=='b')
	{
		cout<<"\n Press 1 for Shirts ";
		cout<<"\n Press 2 for Pants ";
		cout<<"\n Press 3 for Shoes ";
		cin>>t;
		cout<<"\n Enter Quantity ";
		cin>>q;
		switch(t)
		{
			case 1:bill=bill+(q*1500);
			break;
			case 2:bill=bill+(q*3000);
			break;
			case 3:bill=bill+(q*1000);
			break;
			default:cout<<"\n WRONG ";
		}
		cout<<"\n Press a to buy again ";
		cin>>v;
		if(v=='a')
		{
			goto up;
		 } 
	}
	else if(p=='g')
	{
		cout<<"\n Press 1 for Saree";
		cout<<"\n Press 2 for Jacket ";
		cout<<"\n Press 3 for Sandal ";
		cin>>t;
		cout<<"\n Enter Quantity ";
		cin>>q;
		switch(t)
		{
			case 1:bill=bill+(q*5000);
			break;
			case 2:bill=bill+(q*2000);
			break;
			case 3:bill=bill+(q*600);
			break;
			default:cout<<"\n WRONG ";
		}
		cout<<"\n Press a to buy again ";
		cin>>v;
		if(v=='a')
		{
			goto up;
		 } 
	}
	else if(p=='d')
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
	else if(p=='c')
	{
		cout<<"\n Press 1 for Cream ";
		cout<<"\n Press 2 for Talcum Powder ";
		cout<<"\n Press 3 for Perfum ";
		cin>>t;
		cout<<"\n Enter Quantity ";
		cin>>q;
		switch(t)
		{
			case 1:bill=bill+(q*150);
			break;
			case 2:bill=bill+(q*200);
			break;
			case 3:bill=bill+(q*300);
			break;
			default:cout<<"\n WRONG ";
		}
		cout<<"\n Press a to buy again ";
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
	if(bill<1000)
	{
		cout<<"\n NO DISCOUNT ";
	}
	else
	{
		cout<<"\n\n Your Bill after 50% Discount is "<<0.5*bill;	
	}

	return 0;
}
