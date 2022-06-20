#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"\n Enter the nth number:-";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
		cout<<"\n sum is:-"<<sum;
	
	getch();
	
}

