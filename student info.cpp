#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class student{
	public:
	//attributes
		char name[20];
		char dep[50];
		char dob[11];
		char grade;

	//member functions
    void setstudnetinfo();
    void diplayeinfo();
};

int add(int a , int b){
	cout<<"Enter the First value "<<endl;
     cin>>a;
     cout<<"Enter the second value"<<endl;
     cin>>b;
	cout<<"The sum is "<<a+b<<endl;

};

int main(){
	student stu;

	stu.setstudnetinfo();

	void Displayinformation( void );

   int y;
   int x ;

add( x , y );


	return 0;
}

void student::setstudnetinfo(){
	cout<<"Enter the name of the student"<<endl;
	gets(name);
	cout<<endl;
	cout<<"Enter the department of the student"<<endl;
	gets(dep);
	cout<<endl;
	cout<<"Enter the date of birth of the student"<<endl;
	gets(dob);
	cout<<endl;
	cout<<"Enter the grade of the student"<<endl;
	cin>>grade;
	cout<<endl;
}

void student::diplayeinfo(void){
	cout<<"The name of the student"<<name<<endl;
	cout<<"The department of the student"<<dep<<endl;
	cout<<"The date of birth of the student"<<dob<<endl;
	cout<<"The grade of the student"<<grade<<endl;
}
