#include<iostream>
#include<stdlib.h>
#include<unistd.h>
using namespace std;
int main()
{
	int min=40,sec=0;
	while(true)
	{
		system("cls");
		cout<<"\t"<<"Timer" <<" = " <<min<<" : "<<sec<<endl;
		sec++;
		if(sec==60)
		{
		//	min--;
			sec=0;
			if(sec==60)
			{
				min-1;
				
				}
			}
		usleep(1000000);
	}
	return 0;
}
