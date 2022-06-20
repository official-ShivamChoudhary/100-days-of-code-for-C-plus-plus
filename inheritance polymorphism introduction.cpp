#include<iostream>
#include<conio.h>
using namespace std;
class person
{
	public:
		string name;
		int age;
		void setname(string iname){name=iname;}
         void setage(int iage){age=iage;}
     };
     class student : public person
     {
     	public:
     		int id;
     		void setid(int iid){id=iid;}
     		void introduce()
     		{
     			cout<<"hi i am"<<name<<"and i am"<<age<<"years old"<<endl<<"and my student id is"<<" "<<id;
			 }
			 };
			 int main()
			 {
			 	student anil;
			 	anil.setname("anil");
			 	anil.setage(24);
			 	anil.setid(1063);
			 	anil.introduce();
			 	return 0;
			 }
			 
			 
			 
