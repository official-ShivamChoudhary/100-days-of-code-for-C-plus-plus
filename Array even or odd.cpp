#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[3][3],i,j,even,odd;
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
					if(a[i][j]%2==0)
					even=even+1;
					else
					odd=odd+1;
				}
			}
			cout<<"\n Even is:-"<<even;
			cout<<"\n Odd is:-"<<odd;
			getch();
		}
		
		
		
					
