#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,temp;
	int arr[5];
	for(i=0;i<5;i++)
	{
		cout<<"\n Enter into index:-";
		cin>>arr[i];
		}
		cout<<"\n Display you have entered:-";
		for(i=0;i<5;i++)
		{
		cout<<" "<<arr[i];
	}
		cout<<"\n Display result after sorting:-";
		for(i=0;i<5-1;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(arr[i]>arr[j])
				{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				}
				}
				}
				for(i=0;i<5;i++)
				{
					cout<<" "<<arr[i];
					}
					getch();
					}
					
					
					
