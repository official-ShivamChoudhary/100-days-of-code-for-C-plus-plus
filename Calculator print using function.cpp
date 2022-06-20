#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	void sum(int,int);
	void sub(int,int);
    void mul(int,int);
    void div(int,int);

	cout<<"\n Enter the first number:-";
	cin>>a;
	cout<<"\n Enter the second number:-";
	cin>>b;
	sum(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
	getch();
	}
	void sum(int a,int b)
	{
	int c;
	c=a+b;
	cout<<"\n Addition is:-"<<c;
}
	void sub(int a,int b)
	{
		int c;
		c=a-b;
	cout<<"\n Substraction is:-"<<c;
}
	void mul(int a,int b)
	{
		int c;
		c=a*b;
		cout<<"\n Multiplication is:-"<<c;
	}
	void div(int a,int b)
	{
		int c;
		c=a/b;
		cout<<"\n Division is:-"<<c;
	}

