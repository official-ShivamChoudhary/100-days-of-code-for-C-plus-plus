#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int year;
	cout<<"\n Enter the year:-";
	cin>>year;
	if((year%4==0) && (year%100!=0) || (year%4==0))
	cout<<"\n Leap year is:-"<<year;
	else
	cout<<"\n Not a Leap year is:-"<<year;
	getch();
}
