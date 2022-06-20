#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,n,fact;
	for(i=2;i<=120;i++)
	{
		fact=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
		{
			fact=0;
			break;
		}
	}
		if(fact==1)
	{
	
		cout<<i;
}
        cout<<" ";
}
		getch();
	}
	
	
	
		
