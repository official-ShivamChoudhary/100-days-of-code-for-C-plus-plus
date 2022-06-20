#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"\n Enter the class 10th marks:-";
	cin>>a;
	cout<<"\n Enter the class 12th marks:-";
	cin>>b;
	cout<<"\n Enter the class B.tech marks:-";
	cin>>c;
	if((a>=60) && (b>=60) || (c>=60))
	cout<<"\n You are elisible";
	else
	cout<<"\n You are not elisible";
	getch();
}
	

