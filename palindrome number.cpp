#include<iostream>
#include<conio.h>
using namespace std;
	int main()
	{
		int a,n,r,rev=0;
		cout<<"\n Enter the number:-";
		cin>>n;
		a=n;
		while(n>0)
		{
			r=n%10;
			rev=rev*10+r;
			{
				n=n/10;
			}
		}
		if(a==rev)
			cout<<"\n Palindrome number is:-"<<a;
			else
			cout<<"\n Not a Palindrome number is:-"<<a;
			
			getch();
			
		}
