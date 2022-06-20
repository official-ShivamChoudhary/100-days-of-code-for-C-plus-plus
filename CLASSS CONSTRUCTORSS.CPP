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
			name="noname";
			cout<<"\n constructor is called when you create an object of human";
		
		}
		void display()
		{
			cout<<name<<endl<<age<<endl;
		}
	};
	int main()
	{
		Human.shivam;
		shivam.display();
		return 0;
	}
	
	
