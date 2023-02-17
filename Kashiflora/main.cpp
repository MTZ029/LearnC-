#include <iostream>

using namespace std;

struct studentinfo{
    	string name[15];

    };

    int main(){
    struct studentinfo student1,student2,student3,student4,student5;

	char Userchoice;
	cout<<"     please enter 1 for display of student information       "<<endl;

	cout<<"     please enter 2 for altering the information of respectable students       "<<endl;

    cout<<"     please enter 0 for exit from the program       "<<endl;

    cout<<"     Made by : Muhammad Talha Zahid & Uzair Chaudhary    "<<endl;

cin>>Userchoice;
switch(Userchoice){
case 1:
student1.name[0]="Abubakar";
cout<<"name of student 1 is "<<student1.name[0]<<endl;
student2.name[1]="Talha";
cout<<"name of student 2 is "<<student2.name[1]<<endl;
student3.name[2]="Uzair";
cout<<"name of student 3 is "<<student3.name[2]<<endl;
student4.name[3]="Ahmaed";
cout<<"name of student 4 is "<<student4.name[3]<<endl;
student5.name[4]="Umer";
cout<<"name of student 5 is "<<student1.name[4]<<endl;
break;
case 2:
cout<<"Enter the name of student 1 "<<endl;
cin>>student1.name[0];
cout<<"name of student 1 is "<<student1.name[0]<<endl;

cout<<"Enter the name of student 2 "<<endl;
cin>>student2.name[1];
cout<<"name of student 2 is "<<student2.name[1]<<endl;

cout<<"Enter the name of student 3 "<<endl;
cin>>student3.name[2];
cout<<"name of student 3 is "<<student3.name[2]<<endl;

cout<<"Enter the name of student 4 "<<endl;
cin>>student4.name[3];
cout<<"name of student 4 is "<<student4.name[3]<<endl;

cout<<"Enter the name of student 5 "<<endl;
cin>>student5.name[4];
cout<<"name of student 5 is "<<student5.name[4]<<endl;
break;
case 3:
    exit(0);

}
cout<<"Thanks"<<endl;
    return 0;
}
