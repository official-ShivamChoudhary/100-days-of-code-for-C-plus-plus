#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,sum,sub,mul,div;
	cout<<"\n Enter the first number:-";
	cin>>a;
	cout<<"\n Enter the second number:-";
	cin>>b;
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	cout<<"\n Addition is:-"<<sum;
	cout<<"\n Substraction is:-"<<sub;
    cout<<"\n Multiplication is:-"<<mul;
	cout<<"\n Division is:-"<<div;	
	getch();
}
