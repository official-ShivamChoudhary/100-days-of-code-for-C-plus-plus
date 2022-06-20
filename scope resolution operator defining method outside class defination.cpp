#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Human
{
	public:
		string name;
		void introduce();
	};
	void Human::introduce()
	{
		cout<<Human::name<<endl;
		
	}
	int main()
	{
		Human shivam;
		shivam.introduce();
		return 0;
	}
		
