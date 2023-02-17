#include <iostream>
#include <string.h>
using namespace std;

class lib
{
	public://access specifiers
	    //attribtes
	    char *bname;
	    
	    char *aname;
	    
	    int   bno;
	    
	    int stock;
    
    public://access specifiers
	//member fuctions
	lib( char* , char * , int , int );// constructor
    	
	lib(const lib& );//copy constructor

	lib(char , char , int );//prototype of constructor
	
	~lib(){
		delete 
	}
	void Dis();	
}

void state( lib );
int main(){
	char a, b;
	int c,d;
	lib lib1(a , b , c , d );//object
	
	lib lib2=lib1;//state copying
	state( lib1 );
	char e, f ;
	int g
	lib lib3(e,f,g);
	
	lib l;
	l.lib( e , f, g );
	
	return 0;
	
	}

lib::lib(const lib & Obj ){
	bno=Obj.bno;

    stock=Obj.stock;
    #if 0
    bname=Obj.bname;//shallow constructor
    #if 1
    bname=new char(20);// deep constructor(memory allocate)
    
    strcpy(bname , Obj.bname);
    #end if
    
	#if 0
	aname-Obj.aname;
	#if 1
	aname=new char (20);
	
	strcpy (anmae , Obj.aname );
	#end if
}

lib::lib( char*Bname , char*Aname , int Bno , int Stock ){
	Bno=bno;
	Stock=stock;
	bname=new char(20);
	strcpy ( bname , Bname );
	
	aname=new char (20);
	strcpy (aname , Aname )
}
void lib::Dis( ) {
	cout<<"The book name is "<<bname<<endl;
	cout<<"The author name is "<<aname<<endl;
	cout<<"The book number is "<<bno<<endl;
	
	bname=NULL;
	aname=NULL;
} 

lib::lib( char x1 , char x2 , int x3 ){
	
	int userchoice;
	cout<<"		Choose from the below	"<<endl;
	cin>>userchoice;
	
	cout<<"Enter 1 for adding a book name "<<endl
	cout<<"Enter 2 for adding author name "<<endl;
	cout<<"Enter 3 for adding book number "<<endl;
    cout<<endl;	

	switch(userchoice){
		case(1):
			cout<<"Enter the name of the Book"<<endl;
	        cin>>x1;
	        cout<<"THe entered book name is "<<x1<<endl
	        break;
	    case(2):
	    		cout<<"Enter the name of the Book"<<endl;
	            cin>>x2;
              	cout<<"THe entered book name is "<<x2<<endl;
              	break;
        case(3):
        	    cout<<"Enter the number of the Book"<<endl;
	            cin>>x3;
	            cout<<"THe entered book number is "<<x3<<endl;	
	            break;
	}
	
}
lib::~lib(){
	cout<<"The value is deleted "<<endl;
}
void state( lib Obj ){
	
}
