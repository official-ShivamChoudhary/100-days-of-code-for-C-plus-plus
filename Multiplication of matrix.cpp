#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k;
	cout<<"\n Enter the 9 number for a:-";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
			}
			}
			cout<<"\n Enter the 9 number for b:-";
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cin>>b[i][j];
					}
					}
					for(i=0;i<3;i++)
					{
					for(j=0;j<3;j++)
					{
						c[i][j]=0;
						
							for(k=0;k<3;k++)
							{
							
							c[i][j]=c[i][j]+a[i][j]*b[k][j];
							}
							}
							}
							cout<<"\n Multiplication is:-\n";
							for(i=0;i<3;i++)
							{
								for(j=0;j<3;j++)
								{
									cout<<" "<<c[i][j];
									}
									cout<<endl;
									}
									getch();
									}
									
									
						
