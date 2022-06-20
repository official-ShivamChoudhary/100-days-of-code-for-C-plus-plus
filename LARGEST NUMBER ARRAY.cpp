#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[3][3],i,j,max=0;
	cout<<"\n Enter the number:-";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
			}
			}
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					if(a[i][j]>=max)
				max=a[i][j];
				}
				}
				cout<<"\n Largest number is:-"<<max;
				getch();
				}
				
			
