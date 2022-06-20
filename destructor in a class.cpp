#include<iostream>
#include<conio.h>
using namespace std;
class Human
{
	public:
		Human()
		{
			cout<<"constructor called"<<endl;
		}
		~Human()
		{
			cout<<"destructor called"<<endl;
		}
};
int main()
{
	Human *shivam;
	shivam=new Human();
	delete shivam;
	return 0;
}

