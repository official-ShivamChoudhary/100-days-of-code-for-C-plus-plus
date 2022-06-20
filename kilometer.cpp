#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float km,m;
	cout<<"\n Enter the kilometer:-";
	cin>>km;
	m=km*1000;
	cout<<"\n meter is:-"<<m;
	cout<<"\n Enter the meter:-";
	cin>>m;
	km=m/1000;
	cout<<"\n kilometer is:-"<<km;
	getch();
}
