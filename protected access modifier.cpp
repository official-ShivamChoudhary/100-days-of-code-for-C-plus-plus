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
		int main()
		{
			person shivam;
			shivam.name="shivam";
			return 0;
		}
			
