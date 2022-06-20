#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,n,a=0,b=1,c;
	cout<<"\n Enter the nth number:-";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<a;
		c=a+b;
		a=b;
		b=c;
		cout<<endl;
	}
	getch();
}


