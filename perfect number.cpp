#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i=1,num,sum=0;
	cout<<"\n Enter the number:-";
	cin>>num;
	while(i<num)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum==num)
	cout<<"\n Perfect number is:-"<<num;
	else
	cout<<"\n Not a perfect number is:-"<<num;
	getch();
}

	
