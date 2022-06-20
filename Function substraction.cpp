#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	void sub(int,int);
	cout<<"\n Enter the first number:-";
	cin>>a;
	cout<<"\n Enter the second number:-";
	cin>>b;
	sub(a,b);
	getch();
	}
	void sub(int a,int b)
	{
		int c;
		c=a-b;
		cout<<"\n Substraction is:-"<<c;
	}
	
	
