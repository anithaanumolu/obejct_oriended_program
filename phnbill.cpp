#include<iostream>
using namespace std;

int main()
{
	int calls;
	float bill;
	int age;
	cout<<"Enter number of calls : ";
	cin>>calls;
    cout<<"enter age of customer";
    cin>>age;
	if(age<60)
	{
		bill=calls*1.0;
	}
	else if (age>60)
  	{
       	bill=(calls*1.0*0.2);
	}
	cout<<" Your bill is Rs."<<bill;


	return 0;
}
 
