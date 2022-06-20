#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,max;
	cout<<"\n Enter the First number:-";
	cin>>a;
	cout<<"\n Enter the Second number:-";
	cin>>b;
	cout<<"\n Enter the Third number:-";
	cin>>c;
	max=a>b?(a>c?a:c):(b>c?b:c);
	cout<<"\n Largest number is:-"<<max;
	getch();
}
