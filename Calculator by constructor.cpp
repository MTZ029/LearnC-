#include <iostream>
using namespace std;
class Calc{
	private:
		public:
		
		char a , b , f;
		int c ,d , x1 ,x2 ,x3 ,x4 ,x5 ,x6 , x7 ;
		long e;
	public:
		Calc(){
			cout<<"Enter 1 for adding a book"<<endl;
			cout<<"Enter 2 for taking a book"<<endl;
			cout<<"Enter 3 for checking the stock"<<endl;
			cout<<"Enter 4 for exit"<<endl;
		}
		Calc(char a , char b , long e );
		
		Calc(char a, char b , char f); 
		
		Calc(int x1 ,int x2 , int x3 , int x4 ,int x5 , int x6 , int x7);
		
		Calc(int d);
};
int main(){
	float g,h,i;
	int a,b,c, f , x1 ,x2 ,x3 ,x4 ,x5 ,x6 , x7 ;
	char l,m;
	long e;
	Calc c1;//        object is created here
	cout<<"Enter the operation you want to perform"<<endl;

	cin>>f;
	cout<<endl;
	if(f==1)
	{
		cout<<"		Welcome to the section of adding the books		"<<endl;
			cout<<endl;
			cout<<"		Enter the name of the book you want to add to the liberary system		"<<endl;
			cin>>a;
			cout<<endl;
			cout<<"		NOW! Enter the author of the book tou want to add to the liberary system		"<<endl;
			cin>>b;
			cout<<endl;
			cout<<"		Enter the registeration number of the person who is adding the book		"<<endl;
			cin>>e;
			
			cout<<"		The book is succesfully added to the liberary please hand over the book to the liberarian		"<<endl;
			cout<<"               HAVE A GOOD DAY               "<<endl;
}
	if(f==2)
	{
	cout<<"		Welcome to the section of taking a book		"<<endl;
			cout<<endl;
			cout<<"		Enter your name		"<<endl;
			cin>>a;
			cout<<endl;
			cout<<"		Enter your department		"<<endl;
			cin>>b;
			cout<<endl;
			cout<<"		Please enter the name of the on duty liberarian		"<<endl;
			cin>>f;
			cout<<endl;
			cout<<"		The book is succesfully issued on your name please take it from the liberarian		"<<endl;
			cout<<"               HAVE A GOOD DAY               "<<endl;
}
	if(f==3)
	{
		int p=700;
 x1=55;
 x2=72;
 x3=66;
 x4=22;
 x5=55;
 x6=57;
 x7=73;
int sum=x1+x2+x3+x4+x5+x6+x7;
cout<<"     Total number of books are    "<<p<<endl;
cout<<"     The books Of subject CS-121 we have    "<<x1<<"     Of the auther DR.Muhammad Zia   "<<endl;
cout<<"     The books Of subject MA-102 we have    "<<x2<<"     Of the auther DR.Aqueel Ashraf   "<<endl;
cout<<"     The books Of subject IS-101 we have    "<<x3<<"     Of the auther Hur Multani   "<<endl;
cout<<"     The books Of subject PH-112 we have    "<<x4<<"     Of the auther Waleed Waseer   "<<endl;
cout<<"     The books Of subject EN-102 we have    "<<x5<<"     Of the auther Ali Naqi   "<<endl;
cout<<"     The books Of subject PH-194 we have    "<<x6<<"     Of the auther Waleed Waseer   "<<endl;
cout<<"     The books Of subject PY-101 we have    "<<x7<<"     Of the auther Maria Muzaffar   "<<endl;

cout<<"		So there are	"<<sum<<"	books avalable out of	"<<p<<"	in the liber	"<<endl;
cout<<endl;
cout<<"               HAVE A GOOD DAY               "<<endl;
}
	if(f==4)
	{
cout<<"		You are again welcome to the main page of the liberary system	"<<endl;

cout<<endl;
cout<<"               HAVE A GOOD DAY               "<<endl;
}

 return 0;
}
