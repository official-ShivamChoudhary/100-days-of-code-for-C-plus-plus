#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	void mul(int,int);
	cout<<"\n Enter the first number:-";
	cin>>a;
	cout<<"\n Enter the second number:-";
	cin>>b;
	mul(a,b);
	getch();
	}
	void mul(int a,int b)
	{
		int c;
		c=a*b;
		cout<<"\n Multiplication is:-"<<c;
	}
	
	
