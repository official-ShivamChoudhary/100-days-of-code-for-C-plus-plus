#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,min;
	cout<<"\n Enter the first number:-";
	cin>>a;
	cout<<"\n Enter the second number:-";
	cin>>b;
	cout<<"\n Enter the third number:-";
	cin>>c;
	min=a;
	if(b<=min)
	min=b;
	if(c<=min)
	min=c;
	cout<<"\n Smallest number is:-"<<min;
	getch();
}
