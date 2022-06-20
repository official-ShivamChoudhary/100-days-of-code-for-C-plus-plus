#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class HumanBeing
{
	public:
		string name;
		void introduce()
		{
			cout<<"\n Hi I'm"<<" "<<name<<endl;
		}
	};
	int main()
	{
		HumanBeing Shivam;
		Shivam.name="Shivam";
		Shivam.introduce();
		HumanBeing Shubham;
		Shubham.name="Shubham";
		Shubham.introduce();
		return 0;
	}
	
