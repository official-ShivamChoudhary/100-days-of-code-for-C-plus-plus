#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[3][3],i,j,t;
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
					t=a[i][j];
					a[i][j]=a[j][i];
					a[j][i]=t;
					}
					}
					cout<<"\n Transpose is:-\n";
					for(i=0;i<3;i++)
					{
						for(j=0;j<3;j++)
						{
							cout<<" "<<a[j][i];
							}
							cout<<endl;
							}
							getch();
							}
							
							
							
