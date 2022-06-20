#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,i;
	cout<<"\n Enter the value of a:-";
	cin>>a;
	cout<<"\n Enter the value ob b:-";
	cin>>b;
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		cout<<"\n Even is:-"<<i;
		else
		cout<<"\n Odd is:-"<<i;
	}
	getch();
}
