#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,n,r,result=0;
	cout<<"\n Enter the number:-";
	cin>>n;
	a=n;
	while(a!=0)
	{	 
			r=a%10;
			result=result+(r*r*r);
	{
			a=a/10;
		}
	}

	
	if(result==n)
	cout<<"\n Armstrong number is:-"<<n;
	else
	cout<<"\n Not an Armstrong number is:-"<<n;
	getch();
}

