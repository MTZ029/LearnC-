#include <iostream>
#include <string>
using namespace std;

class Books{//program for 20 books
	public:
	    //initializing  string//
		string  Booknames[20]={"Middlemarch","Ulysses","Black house" , "The Rainbow" , "40 Rules of love" , "Cosmos " , "what if" , "The science encyclopedia" , "The poisoners" ,"The GENE", "Clean code", "The Search",  "LOGICS","Get programming", "The hackers", "Islam as it is", "The sealed nectar", "The Good Muslim","Islam"};
	    //intiializing two dimentional array
	     char Aname[30][50]={"George Elliot", "Bronte", "Charles Dicken" ,"DE Lawrance", "Ellif Shafaq" , "Carl Segan","Randall Munroe" ,"The Encyclopedia group ",  "Jabir bin Hayyan", "Richard", "J Battelle", "Jean Gallier","Ana Bell", "Sten Lee", "Maulana Wahadat khan", "Raheequl", "Tahmina Anum", "Maureen Sprankle", "Helwa ",  "Azeez Bhatti", "ENGLISH AUTHORS"};
         int var1,var2,var3;
	public:

		void information();// the first function of return type void
		void selection();// The second function of return type of void
		 Books()//Constructor
		 {

		}
		~Books()//Destructor
		{
		cout<<"     In the destructor        "<<endl;
			}
		Books(int j ){//constructor overloaded parameterized constructor
			char author[20][50];
			Aname[20][50]=author[20][50];
			cout<<"                             The name of its author=     "<<Aname[j]<<endl;

	 }

	 Books(const Books& obj);//copy contructor
};
Books::Books(const Books& obj){
int k;
	cout<<"\\\\\\\\\\\\\\\\\\\\Enter 10 if you want to check avaialability in the liberary\\\\\\\\\\\\\\\\\\\\"<<endl;
	cout<<"\\\\\\\\\\\\\\\\\\\\Enter 11 if you want to borrow it \\\\\\\\\\\\\\\\\\\\"<<endl;
	cout<<"\\\\\\\\\\\\\\\\\\\\Enter 12 to donate\\\\\\\\\\\\\\\\\\\\"<<endl;
	cin>>k;
 if (k=10)
 {
 	cout<<"*****Please take the book from the librarian ******     "<<endl;
 	cout<<endl;

 }

if(k==11)
{
	cout<<"You can borrow"<<endl;
}
if (k==12)
cout<<"THANKS FOR DONATING"<<endl;
}

void Books:: selection(){


    cout<<"                     press 0 for the 1st list of b English books           "<<endl;
    cout<<"                     press 1 for the 2nd list of Science books           "<<endl;
    cout<<"                     press 2 for the 3rd list of programming books           "<<endl;
    cout<<"                     press 3 for the 3rd list of Islamic books           "<<endl;
	cin>>var1;
	switch(var1){

case (0):
 	 cout<<"Welcome to ENGLISH novels list"<<endl;
 cout<<"***************     Press 0 for Middle March             ***************"<<endl;
 cout<<"***************     Press 1 for Ullyses                  ***************"<<endl;
 cout<<"***************     Press 2 for Black house              ***************"<<endl;
 cout<<"***************     Press 3 for The Rainbow              ***************"<<endl;
 cout<<"***************     Press 4 for 40 rules of love         ***************"<<endl;
 cin>>var2;
 {


 if (var2==0)
 {
 	{
 		 	Books(0);

	 }
	 var3=0;
 	information();
 }
 if(var2==1)
 {
 {
 	Books(1);
}
    var3=1;
 	information();

 }
 if(var2==2)
 {
  {
  	Books(2);

 }
         var3=2;
 		information();
 }
 if(var2==3)
 {
 	{

 	Books(3);
}

        var3=3;
 		information();
}
if(var2==4)
{
	{
	Books(4);
}
	var3=4;
	information();
}
}
break;
 case (1):

 {
           cout<<"        Assignment # 2       "<<endl;
 	 	 cout<<"Welcome to CODING novels list"<<endl;
 cout<<"***************     Press 0 for The clean code       ***************"<<endl;
 cout<<"***************     Press 1 for The search           ***************"<<endl;
 cout<<"***************     Press 2 for Logics               ***************"<<endl;
 cout<<"***************     Press 3 for Get programming      ***************"<<endl;
 cout<<"***************     Press 4 for The hackers          ***************"<<endl;
 cin>>var2;

 if (var2==0)
 {
 	{
 		 	Books(5);

	 }
	 var3=5;
 	information();
 }
 if(var2==1)
 {
 {
 	Books(6);
}
    var3=6;
 	information();

 }
 if(var2==2)
 {
  {
  	Books(7);

 }
         var3=7;
 		information();
 }
 if(var2==3)
 {
 	{

 	Books(8);
}

        var3=8;
 		information();
}
if(var2==4)
{
	{
	Books(9);
}
	var3=9;
	information();
}
}
break;
 case (2):

 {cout<<"Welcome to SCIENCE novels list"<<endl;
 cout<<"***************     Press 0 for Cosmos                     ***************"<<endl;
 cout<<"***************     Press 1 for What if                    ***************"<<endl;
 cout<<"***************     Press 2 for The science Encyclopedia   ***************"<<endl;
 cout<<"***************     Press 3 for The poisoners              ***************"<<endl;
 cout<<"***************     Press 4 for The gene                   ***************"<<endl;
 cin>>var2;


 if (var2==0)
 {
 	{
 		 	Books(10);

	 }
	 var3=10;
 	information();
 }
 if(var2==1)
 {
 {
 	Books(11);
}
    var3=11;
 	information();

 }
 if(var2==2)
 {
  {
  	Books(12);

 }
         var3=12;
 		information();
 }
 if(var2==3)
 {
 	{

 	Books(13);
}

        var3=13;
 		information();
}
if(var2==4)
{
	{
	Books(20);
}
	var3=14;
	information();
}
}
break;
 case (3):
 	 cout<<"Welcome to ISLAMIC novels list"<<endl;
 cout<<"***************     Press 0 for Islam as it is        ***************"<<endl;
 cout<<"***************     Press 1 for The sealed nectar     ***************"<<endl;
 cout<<"***************     Press 2 for The good Muslim       ***************"<<endl;
 cout<<"***************     Press 3 for Isam                  ***************"<<endl;
 cout<<"***************     Press 4 for Islam and Us          ***************"<<endl;
 cin>>var2;
 {


 if (var2==0)
 {
 	{
 		 	Books(15);

	 }
	 var3=15;
 	information();
 }
 if(var2==1)
 {
 {
 	Books(16);
}
    var3=16;
 	information();

 }
 if(var2==2)
 {
  {
  	Books(17);

 }
         var3=17;
 		information();
 }
 if(var2==3)
 {
 	{

 	Books(18);
}

        var3=18;
 		information();
}
if(var2==4)
{
	{
	Books(19);
}
	var3=19;
	information();
}
}
break;
 default:
 	cout<<"Please enter a valid input from the topics above"<<endl;
 }
}

 void Books:: information(){
 	int edd;
 	cout<<"                                     BOOK #      "<<Booknames[var3]<<endl;
}


int main(){
    cout<<"*****************************************WELCOME******************************************************"<<"\n";
     Books obj1;
	 obj1.selection();
	 Books obj2=obj1;//Shallow copy constructor

	 char j;
	 cout<<"PRESS 'Y' if u want to TAKE  another book if not then press n"<<endl;
		cin>>j;//taking input
	if(j=='Y',j=='y'){
		obj1.selection();	//Calling member function with obj2 because obj1=obj2
	}
	else(j=='N',j=='n');{
		cout<<"	Thankyou for choosing us	"<<endl;
	}
return 0;
}
