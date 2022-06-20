#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,n;
	int arr[5];
	char found='F';
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
		cout<<"\n Enter the number you want to search:-";
		cin>>arr[i];
		for(i=0;i<5;i++)
		{
			if(arr[i]==n)
			{
				found='T';
				cout<<"\n The number is found at index is:-"<<i;
				break;
			}
		}
		if(found=='F')
		cout<<"\n The number is not found at index:-";
		getch();		
			}
			
