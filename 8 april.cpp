#include <iostream>
using namespace std; 

class lib{
	private://attributes
		char a;
		int b;
		int c;
	
	public://member functions
	    void information(char ){
	    	char x1;
	    	a=x1;
	    		cout<<"		ENTER THE NAME OF THE BOOK YOU WANT TO DONATE TO LIBERARY		"<<	endl;
	cin>>x1;
	cout<<endl;
	cout<<"		The book you entered is		"<<x1<<endl;
		}
	
};



int main(){
	lib l;//object
	char a;
    l.information(a);

	return 0;
}


