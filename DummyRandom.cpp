#include<iostream>
#include<cstring>
using namespace std;

class CentralLab
{
	//private:
		public:
		char *AuthorName;
		char *BookName;
		int BookVer;
		int *PBookVer;
		int PubDate;
		int *PPubDate;
	public:	
		CentralLab (char *A_Name, char *B_Name,int B_Ver, int Pb_Date )
		{
			
			AuthorName=new char(strlen(A_Name)+1);
			strcpy(AuthorName,A_Name);
			BookName=new char(strlen(B_Name)+1);
			strcpy(BookName,B_Name);
			PBookVer=new int;
			BookVer=B_Ver;
			PPubDate=new  int;
			PubDate=Pb_Date;
		}
	/*	CentralLab (CentralLab &BookData) //Shallow Copy Constructor
		{
			AuthorName=BookData.AuthorName;
			BookName=BookData.BookName;
			BookVer=BookData.BookVer;
			PubDate=BookData.PubDate;
	
		}
	*/
		CentralLab (CentralLab &BookData) //Deep Copy Constructor
		{
			AuthorName=new char (strlen(BookData.AuthorName)+1);
			BookName=new char (strlen(BookData.BookName)+1);
			PBookVer=new int; 
			PPubDate=new int ;			
		}
		
		void SetData(char *A_Name, char *B_Name,int B_Ver, int Pb_Date )
		{
			AuthorName=A_Name;
			BookName=B_Name;
			BookVer=B_Ver;
			PubDate=Pb_Date;
		}
		void Display()
		{
			cout<<endl;
			cout<<"\nBook Name: \t"<<BookName<<"\nAuthor Name: \t"<<AuthorName<<"\nBook Version: \t"<<BookVer<<"\nDate of Pub: \t"<<PubDate;
		}
	
};
int main()
{
	bool Borrow;
	int BorrowCall;
	cout<<"\n\t\tWelcome\t\t\n";
	cout<<"Following Books are available:\n";
	CentralLab Book1("Calculus Analaytic","Thomas",222,2001);
		Book1.Display();
	CentralLab Book2=Book1;
	Book2.SetData("Chemistry", "Lowery",444,2001);
		Book2.Display();
	/*Book1.SetData("Urdue","ZaidHamid",555,2011);
		Book1.Display();
	*/	
	cout<<"\nDo You want to Borrow Book? Prees 0 if Not:\t Press 1 if yes:";
	cin>>Borrow;
	if (Borrow==true)
	{

	cout<<"\nEnter The Book Version fromm the above List:- ";
	cin>>BorrowCall;
	if (BorrowCall==444)
	{
		cout<<"This Book Has been allotted to you\n";
		Book2.Display();
		Book2.SetData("Unavailable","Unavailable",0,0);
	}
}
		cout<<"\nThe Lates Status of Record is Now : \n";
		Book2.Display();
		Book1.Display();
	//	Book2.SetData("Physics", "Serway",333,2005);
			
}
