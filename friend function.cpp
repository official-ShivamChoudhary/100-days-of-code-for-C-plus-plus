#include<iostream>
#include<conio.h>
#include<string>
class Human
{
    stringname;
	int age;
	public:
		Human(string iname, int iage)
		{
			name=iname;
			age=iage;
		}
		void tellme()
		{
			cout<<name<<endl<<age<<endl;
		}
		friend class classname;
	};
	void display(Human man)
	{
		cout<<man.name<<endl<<man.age<<endl;
	}
	int main()
	{
		Human anil("anil",24);
		display(anil);
		return 0;
	}
	
	
