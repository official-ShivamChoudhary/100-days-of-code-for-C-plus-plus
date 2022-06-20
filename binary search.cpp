#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char found='F';
	int arr[5];
	int i,j,n,temp,mid,low,high;
	for(i=0;i<5;i++)
	{
		cout<<"\n Enter into index:-";
		cin>>arr[i];
	}
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
				cout<<"\n You have entered:-";
				for(i=0;i<5;i++)
				{
					cout<<" "<<arr[i];
				}
				cout<<"\n Enter the number you want to search:-";
				cin>>n;
				low=0;
					high=5-1;
					while(low<=high)
					{
						mid=(low+high)/2;
						if(n<arr[mid])
						high=mid-1;
						else
						if(n>arr[mid])
						low=mid+1;
						else
						{
							found='T';
							
						cout<<"\n the number is found at index is:-"<<mid;
							break;
							}
							}
							if(found=='F')
							cout<<"\n the number is not found at index";
							getch();
							}
				
