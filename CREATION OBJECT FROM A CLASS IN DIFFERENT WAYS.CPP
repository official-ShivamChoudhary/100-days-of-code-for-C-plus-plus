#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Human
{
	public:
		string name;
		void introduce()
		{
			cout<<"\n Hi"<<" "<<name<<endl;
		}
		};
		int main()
		{
			Human shivam;
			Human *satyam = new Human();
			shivam.name="shivam";
			shivam.introduce();
			satyam->name="satyam";
			satyam->introduce();
			return 0;
		}

