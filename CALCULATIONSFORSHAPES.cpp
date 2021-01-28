#include<iostream>
using namespace std;
int main()
{
	system("color F9");
	cout<<"                                                 SHAPES MEASUREMENT";
	int z;
	cout<<"\n Press 1 for Rectangle ";
	cout<<"\n Press 2 for Square ";
	cout<<"\n Press 3 for Triangle ";
	cout<<"\n Press 4 for Circle \n";
	cin>>z;
	switch (z)
	{
	case 1: 
	{
		char p;
		cout<<"\n Press a for AREA and p for PERIMETER ";
		cin>>p;
		int b,c;
		cout<<"\n Enter Length ";
		cin>>b;
		cout<<"\n Enter Breadth ";
		cin>>c;
		if (p=='a')
		{
			cout<<"\n The AREA is "<<b*c;
		}
		else 
		cout<<"\n The PERIMETER is "<<2*(b+c);
	}
	break;
	case 2:
		{
			char p;
			cout<<"\n Press a for AREA and p for PERIMETER ";
		cin>>p;
		int b;
		cout<<"\n Enter Side ";
		cin>>b;
		if (p=='a')
		{
			cout<<"\n The AREA is "<<b*b;
		}
		else 
		cout<<" The PERIMETER is "<<4*b;
		}
		break;
    case 3:
			{
				char p;
			cout<<"\n Press a for AREA and p for PERIMETER ";
		cin>>p;
		int b,c;
		cout<<"\n Enter Height ";
		cin>>b;
		cout<<"\n Enter Base ";
		cin>>c;
		if(p=='a')
		{
			cout<<"\n The Area is "<<0.5*b*c;
		}
			else
			{
				cout<<"\n The PERIMETER is "<<c*3;
			}
			}
			break;
	case 4:
	{
		char p;
			cout<<"\n Press a for AREA and p for PERIMETER ";
		cin>>p;
		int b;
		cout<<"\n Enter Radius ";
		cin>>b;
		if(p=='a')
		{
			cout<<"\n The Area is "<<(22/7)*b*b;
		}
			else
			{
				cout<<"\n The PERIMETER is "<<2*(22/7)*b;
			}
			}
			break;
			default:
				cout<<"\n YOU HAVE PRESSED WRONG BUTTONS ";
					}				
return 0;
}
