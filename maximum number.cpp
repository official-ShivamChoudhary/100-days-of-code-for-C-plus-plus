#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,max;
	cout<<"\n Enter the first number:-";
	cin>>a;
	cout<<"\n Enter the second number:-";
	cin>>b;
	cout<<"\n Enter the third number:-";
	cin>>c;
	max=a;
	if(b>=max)
	max=b;
	if(c>=max)
	max=c;
	cout<<"\n Largest number is:-"<<max;
	getch();
}
