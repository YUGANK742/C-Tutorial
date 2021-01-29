#include<iostream>
using namespace std;
int main()
{
	system ("color F1");
	cout<<"                              CALCULATOR";
	char x;
	int a,b;
	cout<<"\n Enter Two Numbers ";
	cin>>a>>b;
	cout<<"\n Press M For Multiply ";
	cout<<"\n Press A To Add ";
	cout<<"\n Press S For Subtraction ";
	cout<<"\n Press D For Divide \n ";
	cin>>x;
	switch (x)
	{
		case 'M':
			cout<<a*b;
			break;
		case 'A':
	    	cout<<a+b;
	    	break;
	    case 'S':
	 		cout<<a-b;
	 		break;
	 	case 'D':
	 		cout<<a/b;
	 		break;
	 	default:
	 		cout<<"\n YOU HAVE PRESSED WRONG BUTTON";
	}
	return 0;
}
