#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"\n Enter the number:-";
	cin>>n;
	switch (n)
	{
		case 1:
			cout<<"\n Monday";
			break;
		case 2:
			cout<<"\n Tuesday";
			break;
		case 3:
			cout<<"\n Wednesday";
			break;
		case 4:
			cout<<"\n Thrusday";
			break;
		case 5:
		    cout<<"\n Friday";
			break;
		case 6:
		    cout<<"\n Saturday";
			break;
		case 7:
		    cout<<"\n Sunday";
			break;
		
	    defalt :
	    	
			cout<<"\n Week has only 7 days";
	}
			getch();
}
