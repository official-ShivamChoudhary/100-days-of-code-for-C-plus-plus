#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		cout<<endl;
		for(j=5;j>=i;j--)
		cout<<" ";
		{
			for(k=1;k<=i;k++)
			cout<<i;
		}
	}
	getch();
}

	
