#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	void sum(int,int);
	cout<<"\n Enter the first number:-";
	cin>>a;
	cout<<"\n Enter the second number:-";
	cin>>b;
	sum(a,b);
	getch();
}
void sum(int a,int b)
{
	int c;
	c=a+b;
	cout<<"\n Addition is:-"<<c;
}
