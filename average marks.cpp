#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int phy,che,math,eng,comp,avg,total;
	cout<<"\n Enter the physics marks:-";
	cin>>phy;
	cout<<"\n Enter the chemistry marks:-";
	cin>>che;
    cout<<"\n Enter the mathematics marks:-";
    cin>>math;
    cout<<"\n Enter the english marks:-";
    cin>>eng;
    cout<<"\n Enter the computer marks:-";
    cin>>comp;
    avg=(phy+che+math+eng+comp)/5;
    total=phy+che+math+eng+comp;
    cout<<"\n Average is:-"<<avg;
    cout<<"\n Total is:-"<<total;
    getch();
    
    

}
