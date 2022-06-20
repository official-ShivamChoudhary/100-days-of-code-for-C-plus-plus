#include<iostream>
#include<conio.h>
using namespace std;
class Human
{
	private:
		int age;
		int getage()
		{
			return age-5;
		
		}
		public:
			void displayage()
			{
				cout<<getage()<<endl;
			}
			void setage(int value)
			{
				age=value;
			}
			};
			int main()
			{
				Human shivam;
				shivam.setage(24);
				shivam.displayage();
				return 0;
			}

