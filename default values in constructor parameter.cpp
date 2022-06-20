#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Human
{
	private:
		string name;
		int age;
		public:
			Human()
			{
				cout<<"default constructor"<<endl;
				name="noname";
				age=0;
			}
			Human(string iname="noname",int iage=0)
			{
				cout<<"overloaded constructor"<<endl;
				name=iname;
				age=iage;
			}
			void speakup()
			{
				cout<<name<<endl<<age<<endl;
			}
		};
			int main()
			{
				Human shivam("shivam");
				shivam.speakup();
				return 0;
			}

