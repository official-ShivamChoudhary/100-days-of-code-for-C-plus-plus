#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class person
{
	protected:
		string name;
		public:
			void setname(string iname)
			{
				name=iname;
			}
		};
		class student: public person
		{
			public:
				void display()
				{
					cout<<name<<endl;
				}
			};
			int main()
			student shivam;
			shivam.setname("shivam");
			shivam.display();
			return 0;
		}
		
				
