#include <iostream>
#include <string.h>
using namespace std;
class Student{
public:
  int rollNo;
  char  * name ;
   Student(int, char *); /** Simple constructor */
  Student(const Student &);/** copy constructor */
  void Display();
};
void Functiona( Student );//prototype
int main(){
	Student studentA(25,"Zia");
	Student studentB = studentA;
	Functiona(studentA);
	return 0;
}
Student::Student(const Student & Obj){
    rollNo = Obj.rollNo;
    #if 0
    name = Obj.name;/** Shallow copy constructor*/
    #else
    name = new char(25); /** Deep copy constructor*/
    strcpy(name, Obj.name);
    #endif
}
Student::Student(int RollNumber, char * Name){
   rollNo =RollNumber;
   name=new char(25);
   strcpy(name, Name);
}
void Student::Display( ){
   cout<< "Name is "<< name<<endl;
   cout<< "Roll Number "<<rollNo<< endl;

   name=NULL;
}
void Functiona(Student Obj){

}
