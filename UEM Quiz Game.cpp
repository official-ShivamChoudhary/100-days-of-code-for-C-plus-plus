#include<iostream>
#include<conio.h>
#include<unistd.h>
using namespace std;
	    int main()
	    {
		int option,counter=60,score=0,grade,m=60,s=365,h=1,SS=0,MM=0,HH=0;
		string name,sirname,dateofbirth,email,collegename,department;
		char opt,reply;
	cout<<"\t\t\t\t\t\t\t\t\t\t====================================================\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t******* Welcome To UEM Quiz Game Competition *******\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t====================================================\n";
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t****************************************************";
	cout<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Enter your Name:-";
	cin>>name>>sirname;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t****************************************************";
	cout<<endl;
    cout<<"\n\t\t\t\t\t\t\t\t\t\t Enter your date of birth:-";
	cin>>dateofbirth;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t****************************************************";
	cout<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Enter your email:-";
	cin>>email;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t****************************************************";
	cout<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Enter your college name:-";
	cin>>collegename;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t****************************************************";
	cout<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Department:-";
	cin>>department;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t****************************************************";
	cout<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\tWelcome to"<<" "<<name<<" "<<sirname;
	cout<<endl;
    cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	main:
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t 1. Start Quiz\n";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t 2. View Score\n";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t 3. View Grade\n";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t 4. View Answer\n";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t 5. Quit Game\n";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t Select one option from above:-";
	cin>>option;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- BEST OF LUCK !!-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	switch (option)
	{
case 1:
	cout<<"\t\t\t\t\t\t\t\t\t\t SECTION - A"<<"  "<<"10"<<" "<<"Question"<<"\t correct Answer"<<" = "<<"2";
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t\t SECTION - B"<<"  "<<"10"<<" "<<"Question"<<"\t wrong Answer"<<" = "<<"-2";
	sleep(3);
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	SS=0;
	while(SS<40 && !kbhit())
 {
  SS++;
  sleep(2);
  system("CLS");
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
    cout<<"\n\t\t\t\t\t\t\t\t\t\t Q1. Stack is also called as"<<"\t\t\t\t\t(2) points";
	cout<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t (a). First in First out (b). First in last out";
	cout<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t (c). last in last out   (d). last in First out";
	cout<<endl;
	cout<<endl;
	cout<<endl;
  cout<<"\n\t\t\t\t\t\t\t\t\t\t Remaining Time ="<<" "<<SS;
  cout<<endl;
  //cout<<"\n\t\t HH : MM : SS";
  cout<<"\n\t\t\t\t\t\t\t\t\t\t press any key to stop";
  cout<<endl;
 }
 getch();
 if(SS!=40){
 	
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Enter your correct option:-";
	cin>>opt;
}
 else
 {
 	opt='a';
 }
	if(opt=='d' or opt=='D')
	{
		cout<<"\n\t\t\t\t\t\t\t\t\t\t correct option : "<<"(score)"<<" = "<<"2";
		score=score+2;
	}
	else
	{	
		cout<<"\n\t\t\t\t\t\t\t\t\t\t Sorry wrong answer : "<<"(score)"<<" = "<<"-2";
		cout<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t write answer is (d).last in first out";
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	SS=0;
	while(SS<40 && !kbhit())
 {
  SS++;
  sleep(2);
  system("CLS");
   cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Q2. Any node is the path from the root to the node is called "<<"\t\t\t\t\t(2) points";
	cout<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t (a). Ancestor node (b). Successor node";
	cout<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t (c).Internal node  (d). None of the above";
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Remaining Time ="<<" "<<SS;
	cout<<endl;
//  cout<<"\n\t\t HH : MM : SS";
  cout<<"\n\t\t\t\t\t\t\t\t\t\t press any key to stop";
  cout<<endl;
 }
 getch();
 if(SS!=40){
 	
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Enter your correct option:-";
	cin>>opt;
}
 else
 {
 	opt='b';
 }
	if(opt=='a' or opt=='A')
{
	cout<<"\n\t\t\t\t\t\t\t\t\t\t correct option : "<<"(score)"<<" = "<<"2";
	score=score+2;
}
else
	{
		cout<<"\n\t\t\t\t\t\t\t\t\t\t Sorry wrong answer : "<<"(score)"<<" = "<<"-2";
		cout<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t write answer is (a). Ancestor node";
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	SS=0;
		while(SS<40 && !kbhit())
 {
  SS++;
  sleep(2);
  system("CLS");
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Q3. Which of the following is not the type of queue?"<<"\t\t\t\t\t(2) points";
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t (a). priority queue     (b). circular queue";
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t (c). single ended queue (d). ordinary queue";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Remaining Time ="<<" "<<SS;
cout<<endl;
  //cout<<"\n\t\t HH : MM : SS";
  cout<<"\n\t\t\t\t\t\t\t\t\t\t press any key to stop";
  cout<<endl;
 }
 getch();
 if(SS!=40){
 	
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Enter your correct option:-";
	cin>>opt;
}
 else
 {
 	opt='a';
}
if(opt=='c' or opt=='C')
{
	cout<<"\n\t\t\t\t\t\t\t\t\t\t correct option : "<<"(score)"<<" = "<<"2";
	score=score+2;
}
else
	{
		cout<<"\n\t\t\t\t\t\t\t\t\t\t Sorry wrong answer : "<<"(score)"<<" = "<<"-2";
		cout<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t write answer is (c). single ended queue";
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	 
	    SS=0;
		while(SS<40 && !kbhit())
 {
  SS++;
  sleep(2);
  system("CLS");
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
cout<<"\n\t\t\t\t Q4. A graph is a collection of node called -----and line segment called arcs or ------that connect pair of nodes."<<"\t\t\t\t\t(2) points";
cout<<endl;
cout<<"\n\t\t\t\t (a). vertices, path    (b). vertices, edges";
cout<<endl;
cout<<"\n\t\t\t\t (c). graph node, edges (d). edges, vertices";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"\n\t\t\t\t Remaining Time ="<<" "<<SS;
cout<<endl;
cout<<"\n\t\t\t\t press any key to stop";
cout<<endl;
 }
 getch();
 if(SS!=40){
 	
	cout<<"\n\t\t\t\t Enter your correct option:-";
	cin>>opt;
}
 else
 {
 	opt='a';
}
if(opt=='b' or opt=='B')
{
	cout<<"\n\t\t\t\t correct option : "<<"(score)"<<" = "<<"2";
	score=score+2;
}
else
	{
		cout<<"\n\t\t\t\t Sorry wrong answer : "<<"(score)"<<" = "<<"-2";
		cout<<endl;
	    cout<<"\n\t\t\t\t write answer is (b). vertices, adges";
	}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
    SS=0;
	while(SS<40 && !kbhit())
 {
  SS++;
  sleep(2);
  system("CLS");
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
cout<<"\n\t\t\t\t Q5. In----search start at the beginning of the list and check every element in the list."<<"\t\t\t\t\t(2) points";
cout<<endl;
cout<<"\n\t\t\t\t (a). Binary search (b). Hash search";
cout<<endl;
cout<<"\n\t\t\t\t (c). Linear search (d). Binary tree search";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"\n\t\t\t\t Remaining Time ="<<" "<<SS;
cout<<endl;
cout<<"\n\t\t\t\t press any key to stop";
cout<<endl;
 }
 getch();
 if(SS!=40){
	cout<<"\n\t\t\t\t Enter your correct option:-";
	cin>>opt;
}
 else
 {
 	opt='a';
}
if(opt=='c' or opt=='C')
{
	cout<<"\n\t\t\t\t correct option : "<<"(score)"<<" = "<<"2";
	score=score+2;
}
else
	{
		cout<<"\n\t\t\t\t Sorry wrong answer : "<<"(score)"<<" = "<<"-2";
		cout<<endl;
		cout<<"\n\t\t\t\t write answer is (c). Linear search";
	}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

    SS=0;
	while(SS<40 && !kbhit())
 {
  SS++;
  sleep(2);
  system("CLS");
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
cout<<"\n\t\t\t\t Q6. In the -----traversal we process all of a vertex's descendants before we move to an adjacent vertex."<<"\t\t\t\t\t(2) points";
cout<<endl;
cout<<"\n\t\t\t\t (a). Depth limited  (b). with first";
cout<<endl; 
cout<<"\n\t\t\t\t (c). Breadth first  (d). Depth first";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"\n\t\t\t\t Remaining Time ="<<" "<<SS;
cout<<endl;
cout<<"\n\t\t\t\t press any key to stop";
cout<<endl;
 }
 getch();
 if(SS!=40){	
	cout<<"\n\t\t\t\t Enter your correct option:-";
	cin>>opt;
}
 else
 {
 	opt='a';
}
if(opt=='d' or opt=='D' or opt=='4')
{
	cout<<"\n\t\t\t\t correct option : "<<"(score)"<<" = "<<"2";
	score=score+2;
}
else
	{
		cout<<"\n\t\t\t\t Sorry wrong answer : "<<"(score)"<<" = "<<"-2";
		cout<<endl;
		cout<<"\n\t\t\t\t write answer is (d). Depth first";
	}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
    SS=0;
	while(SS<40 && !kbhit())
 {
  SS++;
  sleep(2);
  system("CLS");
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
cout<<"\n\t\t\t\t Q7. To represent hierarchical relationship between element which data structure is suitable?"<<"\t\t\t\t\t(2) points";
cout<<endl;
cout<<"\n\t\t\t\t (a). Graph   (b). Tree"; 
cout<<endl;
cout<<"\n\t\t\t\t (c). dequeue (d). priority";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"\n\t\t\t\t Remaining Time ="<<" "<<SS;
cout<<endl;
cout<<"\n\t\t\t\t press any key to stop";
cout<<endl;
 }
 getch();
 if(SS!=40){	
	cout<<"\n\t\t\t\t Enter your correct option:-";
	cin>>opt;
}
 else
 {
 	opt='a';
}
if(opt=='b' or opt=='B')
{	
    cout<<"\n\t\t\t\t correct option : "<<"(score)"<<" = "<<"2";
	score=score+2;
}
else
	{
		cout<<"\n\t\t\t\t Sorry wrong answer : "<<"(score)"<<" = "<<"-2";
		cout<<endl;
		cout<<"\n\t\t\t\t write answer is (b). Tree";
	}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
    SS=0;
	while(SS<40 && !kbhit())
 {
  SS++;
  sleep(2);
  system("CLS");
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Q8. Which of the following data structure is linear type?"<<"\t\t\t\t\t(2) points";
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t (a). Stack (b). Graph";
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t (c). Trees (d). Binary Tree";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Remaining Time ="<<" "<<SS;
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t press any key to stop";
cout<<endl;
 }
 getch();
 if(SS!=40){	
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Enter your correct option:-";
	cin>>opt;
}
 else
 {
 	opt='c';
}
if(opt=='a' or opt=='A')
{
	cout<<"\n\t\t\t\t\t\t\t\t\t\t correct option : "<<"(score)"<<" = "<<"2";
	score=score+2;
}
else
	{
		cout<<"\n\t\t\t\t\t\t\t\t\t\t Sorry wrong answer : "<<"(score)"<<" = "<<"-2";
		cout<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t write answer is (a). Stack";
	}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
    SS=0;
	while(SS<40 && !kbhit())
 {
  SS++;
  sleep(2);
  system("CLS");
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
cout<<"\n\t\t\t\t Q9. Which of the following data structure can't store the nonhomogeneous data element"<<"\t\t\t\t\t(2) points";
cout<<endl;
cout<<"\n\t\t\t\t (a). Array   (b). stack";
cout<<endl; 
cout<<"\n\t\t\t\t (c). Records (d). None of the above";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"\n\t\t\t\t Remaining Time ="<<" "<<SS;
cout<<endl;
cout<<"\n\t\t\t\t press any key to stop";
cout<<endl;
 }
 getch();
 if(SS!=40){	
	cout<<"\n\t\t\t\t Enter your correct option:-";
	cin>>opt;
}
 else
 {
 	opt='d';
}
if(opt=='a' or opt=='A')
{
	cout<<"\n\t\t\t\t correct option : "<<"(score)"<<" = "<<"2";
	score=score+2;
}
else
	{
		cout<<"\n\t\t\t\t Sorry wrong answer : "<<"(score)"<<" = "<<"-2";
		cout<<endl;
		cout<<"\n\t\t\t\t write answer is (a). Array";
	}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
SS=0;
	while(SS<40 && !kbhit())
 {
  SS++;
  sleep(2);
  system("CLS");
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
cout<<"\n\t\t\t\t Q10. A binary search tree whose left sub tree and right sub tree differ in the height by at most 1 unit is called--"<<"\t\t\t\t\t(2) points"; 
cout<<endl;
cout<<"\n\t\t\t\t (a). Leema Tree (b). Red black Tree";
cout<<endl;
cout<<"\n\t\t\t\t (c). AVL Tree   (d). None of the above";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"\n\t\t\t\t Remaining Time ="<<" "<<SS;
cout<<endl;
cout<<"\n\t\t\t\t press any key to stop";
cout<<endl;
 }
 getch();
 if(SS!=40){	
	cout<<"\n\t\t\t\t Enter your correct option:-";
	cin>>opt;
}
 else
 {
 	opt='a';
}
if(opt=='c' or opt=='C')
{
	cout<<"\n\t\t\t\t correct option : "<<"(score)"<<" = "<<"2";
	score=score+2;
}
else
	{
		cout<<"\n\t\t\t\t Sorry wrong answer : "<<"(score)"<<" = "<<"-2";
		cout<<endl;
		cout<<"\n\t\t\t\t write answer is (c). AVL Tree";
	}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"*****************************************************************************************************************************************************************************************************************";
cout<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t SECTION - B";
cout<<endl;
cout<<"*****************************************************************************************************************************************************************************************************************";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

SS=0;
	while(SS<40 && !kbhit())
 {
  SS++;
  sleep(3);
  system("CLS");
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
cout<<"\n\t\t\t\t Q11. -------is a pile in which item's are added at one end and removed from the others."<<"\t\t\t\t\t(2) points";
cout<<endl; 
cout<<"\n\t\t\t\t (a). List  (b). Queue";
cout<<endl; 
cout<<"\n\t\t\t\t (c). stack (d). Array";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"\n\t\t\t\t Remaining Time ="<<" "<<SS;
cout<<endl;
cout<<"\n\t\t\t\t press any key to stop";
cout<<endl;
 }
 getch();
 if(SS!=40){
 	
	cout<<"\n\t\t\t\t Enter your correct option:-";
	cin>>opt;
}
 else
 {
 	opt='a';
}
if(opt=='b' or opt=='B')
{
	cout<<"\n\t\t\t\t correct option : "<<"(score)"<<" = "<<"2";
	score=score+2;
}
else
	{
		cout<<"\n\t\t\t\t Sorry wrong answer : "<<"(score)"<<" = "<<"-2";
		cout<<endl;
		cout<<"\n\t\t\t\t write answer is (b). Queue";
	}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

SS=0;
	while(SS<40 && !kbhit())
 {
  SS++;
  sleep(2);
  system("CLS");
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Q12. Which of the following is non-linear data structure?"<<"\t\t\t\t\t(2) points";
cout<<endl; 
cout<<"\n\t\t\t\t\t\t\t\t\t\t (a). Trees  (b). stack";
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t (c). string (d). All of the above";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Remaining Time ="<<" "<<SS;
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t press any key to stop";
cout<<endl;
 }
 getch();
 if(SS!=40){
 	
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Enter your correct option:-";
	cin>>opt;
}
 else
 {
 	opt='c';
}
if(opt=='a' or opt=='A')
{
	cout<<"\n\t\t\t\t\t\t\t\t\t\t correct option : "<<"(score)"<<" = "<<"2";
	score=score+2;
}
else
	{
		cout<<"\n\t\t\t\t\t\t\t\t\t\t Sorry wrong answer : "<<"(score)"<<" = "<<"-2";
		cout<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t write answer is (a). string";
	}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

SS=0;
	while(SS<40 && !kbhit())
 {
  SS++;
  sleep(2);
  system("CLS");
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Q13. ------is not the operation that can't be performed on queue."<<"\t\t\t\t\t(2) points";
cout<<endl; 
cout<<"\n\t\t\t\t\t\t\t\t\t\t (a). Traversal  (b).Insertion";
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t (c). Deletion   (d). Retrieval";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Remaining Time ="<<" "<<SS;
cout<<endl;
  cout<<"\n\t\t\t\t\t\t\t\t\t\t press any key to stop";
  cout<<endl;
 }
 getch();
 if(SS!=40){
 	
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Enter your correct option:-";
	cin>>opt;
}
 else
 {
 	opt='c';
}
if(opt=='a' or opt=='A')
{
	cout<<"\n\t\t\t\t\t\t\t\t\t\t correct option : "<<"(score)"<<" = "<<"2";
	score=score+2;
}
else
	{
		cout<<"\n\t\t\t\t\t\t\t\t\t\t Sorry wrong answer : "<<"(score)"<<" = "<<"-2";
		cout<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t write answer is (a). Traversal";
	}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
SS=0;
	while(SS<40 && !kbhit())
 {
  SS++;
  sleep(2);
  system("CLS");
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Q14. Whis is/are the application(s) of stack"<<"\t\t\t\t\t(2) points"; 
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t (a). function call                        (b). large number arithmetic";
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t (c). Evaluation of arithmetic expression  (d). All of the above";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Remaining Time ="<<" "<<SS;
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t press any key to stop";
cout<<endl;
 }
 getch();
 if(SS!=40)
 {	
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Enter your correct option:-";
	cin>>opt;
}
 else
 {
 	opt='a';
}
if(opt=='d' or opt=='D')
{
	cout<<"\n\t\t\t\t\t\t\t\t\t\t correct option : "<<"(score)"<<" = "<<"2";
	score=score+2;
}
else
	{
		cout<<"\n\t\t\t\t\t\t\t\t\t\t Sorry wrong answer : "<<"(score)"<<" = "<<"-2";
		cout<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t write answer is (d). All of the above";
	}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
SS=0;
	while(SS<40 && !kbhit())
 {
  SS++;
  sleep(2);
  system("CLS");
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Q15. Which of the following data structure are indexed structure?"<<"\t\t\t\t\t(2) points";
cout<<endl; 
cout<<"\n\t\t\t\t\t\t\t\t\t\t (a). stack          (b).Linked list";
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t (c). Linear search  (d).None of the above";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Remaining Time ="<<" "<<SS;
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t press any key to stop";
cout<<endl;
 }
 getch();
 if(SS!=40){
 	
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Enter your correct option:-";
	cin>>opt;
}
 else
 {
 	opt='a';
}
if(opt=='c' or opt=='C')
{
	cout<<"\n\t\t\t\t\t\t\t\t\t\t correct option : "<<"(score)"<<" = "<<"2";
	score=score+2;
}
else
	{
		cout<<"\n\t\t\t\t\t\t\t\t\t\t Sorry wrong answer : "<<"(score)"<<" = "<<"-2";
		cout<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t write answer is (c). Linear search";
	}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
SS=0;
	while(SS<40 && !kbhit())
 {
  SS++;
  sleep(2);
  system("CLS");
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Q16. Linear array are also called------"<<"\t\t\t\t\t(2) points";
cout<<endl; 
cout<<"\n\t\t\t\t\t\t\t\t\t\t (a). one-dimensional array  (b). vertical array";
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t (c). Horizontal array       (d). All of the above";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Remaining Time ="<<" "<<SS;
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t press any key to stop";
cout<<endl;
 }
 getch();
 if(SS!=40){
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Enter your correct option:-";
	cin>>opt;
}
 else
 {
 	opt='d';
}
if(opt=='a' or opt=='A')
{
	cout<<"\n\t\t\t\t\t\t\t\t\t\t correct option : "<<"(score)"<<" = "<<"2";
	score=score+2;
}
else
	{
		cout<<"\n\t\t\t\t\t\t\t\t\t\t Sorry wrong answer : "<<"(score)"<<" = "<<"-2";
		cout<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t write answer is (a). one-dimensional array";
	}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
SS=0;
	while(SS<40 && !kbhit())
 {
  SS++;
  sleep(2);
  system("CLS");
   cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Q17. A------does not keep track of address of every element in the list."<<"\t\t\t\t\t(2) points";
cout<<endl; 
cout<<"\n\t\t\t\t\t\t\t\t\t\t (a). stack  (b). Queue";
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t (c). string (d). linear array";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Remaining Time ="<<" "<<SS;
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t press any key to stop";
cout<<endl;
 }
 getch();
 if(SS!=40){
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Enter your correct option:-";
	cin>>opt;
}
 else
 {
 	opt='a';
}
if(opt=='d' or opt=='D')
{
	cout<<"\n\t\t\t\t\t\t\t\t\t\t correct option : "<<"(score)"<<" = "<<"2";
	score=score+2;
}
else
	{
		cout<<"\n\t\t\t\t\t\t\t\t\t\t Sorry wrong answer : "<<"(score)"<<" = "<<"-2";
		cout<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t write answer is (d). linear array";
	}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
SS=0;
	while(SS<40 && !kbhit())
 {
  SS++;
  sleep(2);
  system("CLS");
   cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Q18. The complexity of linear search algorithm is"<<"\t\t\t\t\t(2) points";
cout<<endl; 
cout<<"\n\t\t\t\t\t\t\t\t\t\t (a). o(n)  (b). o(log n)";
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t (c). o(n2) (d). o(n log n)";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Remaining Time ="<<" "<<SS;
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t press any key to stop";
cout<<endl;
 }
 getch();
 if(SS!=40)
 {	
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Enter your correct option:-";
	cin>>opt;
}
 else
 {
 	opt='d';
}
if(opt=='a' or opt=='A')
{
	cout<<"\n\t\t\t\t\t\t\t\t\t\t correct option : "<<"(score)"<<" = "<<"2";
	score=score+2;
}
else
	{
		cout<<"\n\t\t\t\t\t\t\t\t\t\t Sorry wrong answer : "<<"(score)"<<" = "<<"-2";
		cout<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t write answer is (a). o(n)";
	}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
SS=0;
	while(SS<40 && !kbhit())
 {
  SS++;
  sleep(2);
  system("CLS");
   cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Q19. The complexity of Binary search algorithm is"<<"\t\t\t\t\t(2) points";
cout<<endl; 
cout<<"\n\t\t\t\t\t\t\t\t\t\t (a). o(n)   (b). o(log n)";
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t (c). o(n2)  (d). o(n log n)";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Remaining Time ="<<" "<<SS;
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t press any key to stop";
cout<<endl;
 }
 getch();
 if(SS!=40){
 	
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Enter your correct option:-";
	cin>>opt;
}
 else
 {
 	opt='a';
}
if(opt=='b' or opt=='B')
{
	cout<<"\n\t\t\t\t\t\t\t\t\t\t correct option : "<<"(score)"<<" = "<<"2";
	score=score+2;
}
else
	{
		cout<<"\n\t\t\t\t\t\t\t\t\t\t Sorry wrong answer : "<<"(score)"<<" = "<<"-2";
		cout<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t write answer is (b). 0(log n)";
	}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
SS=0;
	while(SS<40 && !kbhit())
 {
  SS++;
  sleep(2);
  system("CLS");
   cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Q20. The complexity of Bubble sort algorithm is"<<"\t\t\t\t\t(2) points";
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t (a). o(n)  (b). o(log n)";
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t (c). o(n2) (d). o(n log n)";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t Remaining Time ="<<" "<<SS;
cout<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t press any key to stop";
cout<<endl;
 }
 getch();
 if(SS!=40){
	cout<<"\n\t\t\t\t\t\t\t\t\t\t Enter your correct option:-";
	cin>>opt;
}
 else
 {
 	opt='a';
}
if(opt=='c' or opt=='C')
{
	cout<<"\n\t\t\t\t\t\t\t\t\t\t correct option : "<<"(score)"<<" = "<<"2";
	score=score+2;
}
else 
	{
		cout<<"\n\t\t\t\t\t\t\t\t\t\t Sorry wrong answer : "<<"(score)"<<" = "<<"-2";
		cout<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t write answer is (c). o(n2)";
	}
{
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t Are you Ready to Submit your Answer(y/n):- ";
		cin>>reply;
		if((reply=='y') && (reply=='Y') || (reply=='n') && (reply=='N'))		
		cout<<endl;		
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"\n\t\t\t\t\t\t\t\t\t\t********  THANK YOU FOR ATTENDING QUIZ COMPETITION  ********";
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 1. Start Quiz\n";
		cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 2. View Score\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 3. View Grade\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 4. view Answer\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 5. Quit Game\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t Select one option from above:-";
	    cin>>opt;
	    cout<<endl;
	    cout<<endl;
	    cout<<endl;
case 2:
		cout<<"\n Total Score = 40 \n";		
		cout<<"\n Obtain Score = "<<score;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 1. Start Quiz\n";
		cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 2. View Score\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 3. View Grade\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 4. view Answer\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 5. Quit Game\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t Select one option from above:-";
	    cin>>option;
	    cout<<endl;
	    cout<<endl;
	    cout<<endl;
	 if(score<20)
		{
			cout<<endl;
			cout<<"\n Grade = B";
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
	}
		else if(score>20)
		{
			cout<<endl;
		cout<<"\n Grade = A";
	}   
	    cout<<endl;
	    cout<<endl;
	    cout<<endl;
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 1. Start Quiz\n";
		cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 2. View Score\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 3. View Grade\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 4. view Answer\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 5. Quit Game\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t Select one option from above:-";
	    cin>>opt;
	    cout<<endl;
	    cout<<endl;
	    cout<<endl;
	    cout<<endl;
	    cout<<"\n Ans 1. "<<"last in First out";
	    cout<<endl;
	    cout<<"\n Ans 2. "<<"Ancestor node";
	    cout<<endl;
	    cout<<"\n Ans 3. "<<"single ended queue";
	    cout<<endl;
	    cout<<"\n Ans 4. "<<"vertices, edges";
	    cout<<endl;
	    cout<<"\n Ans 5. "<<"Linear search";
	    cout<<endl;
	    cout<<"\n Ans 6. "<<"Depth first";
	    cout<<endl;
	    cout<<"\n Ans 7. "<<"Tree";
	    cout<<endl;
	    cout<<"\n Ans 8. "<<"stack";
	    cout<<endl;
	    cout<<"\n Ans 9. "<<"Array";
	    cout<<endl;
	    cout<<"\n Ans 10. "<<"AVL Tree";
	    cout<<endl;
	    cout<<"\n Ans 11. "<<"Queue";
	    cout<<endl;
	    cout<<"\n Ans 12. "<<"Trees";
	    cout<<endl;
	    cout<<"\n Ans 13. "<<"Traversal";
	    cout<<endl;
	    cout<<"\n Ans 14. "<<"All of the above";
	    cout<<endl;
	    cout<<"\n Ans 15. "<<"Linear search";
	    cout<<endl;
	    cout<<"\n Ans 16. "<<"one-dimensional array";
	    cout<<endl;
	    cout<<"\n Ans 17. "<<"linear array";
	    cout<<endl;
	    cout<<"\n Ans 18. "<<"o(n)";
	    cout<<endl;
	    cout<<"\n Ans 19. "<<"o(log n)";
	    cout<<endl;
	    cout<<"\n Ans 20. "<<"o(n2)";
	    cout<<endl;
	    cout<<endl;
	    cout<<endl;
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 1. Start Quiz\n";
		cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 2. View Score\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 3. View Grade\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 4. view Answer\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 5. Quit Game\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t Select one option from above:-";
	    cin>>opt;
	    cout<<endl;
	    cout<<endl;
	    cout<<endl;
	    cout<<endl;
	    cout<<"Do You Want to exit the Quiz(y/n):-";
	    cin>>reply;
		break;
	}
case 3:
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 1. Start Quiz\n";
		cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 2. View Score\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 3. View Grade\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 4. view Answer\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 5. Quit Game\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t Select one option from above:-";
	    cin>>opt;
case 4:
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 1. Start Quiz\n";
		cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 2. View Score\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t  3. View Grade\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 4. view Answer\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t 5. Quit Game\n";
	    cout<<endl;
	    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t Select one option from above:-";
	    cin>>opt;
case 5:
		cout<<"Do You Want to exit the Quiz(y/n):-";
		cin>>reply;
		if(reply=='y' or reply=='Y')
		{
		break;
	}
	else
		{
		goto main;		
			}
	}
		getch();
}






























