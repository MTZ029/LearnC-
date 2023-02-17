/*

#include <iostream>
using namespace std;

void add(int* , int* );

int main(){
	
	int x; 
	int y;
	
	
	cout<<"Enter the value of x "<<endl;
	cin>>x;
	
    cout<<"Enter the value of y "<<endl;
	cin>>y;
	
	add(&x , &y );
		return 0;
}

void add(int *x , int *y){
	int z;
	z=*x+*y;	
	cout<<"	The sum is	"<<z<<endl;
	int *ptr=&z;
	
	cout<<"	 The location of z is	"<<ptr<<endl;
	
}    */


#include <iostream>
using namespace std;

void add(int& , int&);
int main(){
	
	int x; 
	int y;
	
	cout<<"	Enter the value x	"<<endl;
	cin>>x;
	
	cout<<"	Enter the value of y	"<<endl;
	cin>>y;
	
	add( x ,y );
	
	return 0;
} 


void add(int &q , int &r ){
	int y;
	
	y=q+r;
	
	cout<<"	The sum through reference is	"<<y<<endl;
	
	cout<<"	The location through referencing is	"<<&y<<endl;
	cout<<endl;
	cout<<&q<<endl;
	cout<<&r<<endl;
	
	
	
}
