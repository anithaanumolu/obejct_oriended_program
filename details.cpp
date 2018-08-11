#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	public:
	char name[20];
	int age;
	int contact;
	char address[50];
	student()
   { 
	  cout<<"**student details**";
	  cout<<"enter the name of student"<<endl<<"name"<<endl<<"age"<<endl<<"contact"<<endl<<"add"<<endl;
	  cin>>name>>age>>contact>>address;	  
	}

	void display()
	{
		cout<<"name"<<name<<"age"<<age<<"contact"<<contact<<"adress"<<address;
	}
};
class personal
{
	public:
		int height;
		int weight;
		char bg;
		char email[20];
	personal()
	{
        cout<<"**personal details**";
	cout<<"height of stu:";
		cin>>height;
		cout<<"weigth of stu";
		cin>>weight;
		cout<<"blood group of stu";
		cin>>bg;
		cout<<"email of stu:";
		cin>>email;
    }
  //personal()
  //{
  	//height=0;
  	//weight=0;
  	//bg=0;
  //	email=0;
	//} 
		void display2()
		{
			cout<<"heigth"<<height<<"weight"<<weight<<"blood group"<<bg<<"email"<<email;
		}
	
~personal()
{
	cout<<"\n destroy objects";
}
};
int main()
{
	student sd ;
	personal p;
	student sd1();
	personal p1();
	sd.display();
	p.display2();
    return 0;
	}

