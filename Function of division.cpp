#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	void div(int,int);
	cout<<"\n Enter the first number:-";
	cin>>a;
	cout<<"\n Enter the second number:-";
	cin>>b;
	div(a,b);
	getch();
	}
	void div(int a,int b)
	{
		int c;
		c=a/b;
		cout<<"\n Division is:-"<<c;
	}
	
	
