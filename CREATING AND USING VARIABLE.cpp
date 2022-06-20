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
			cout<<"\n hi I am"<<" "<<name<<endl;
		}
	};
	int main()
	{
		HumanBeing shivam;
		shivam.name="shivam";
		shivam.introduce();
		HumanBeing satyam;
		satyam.name="satyam";
		satyam.introduce();
		return 0;
	}
		

