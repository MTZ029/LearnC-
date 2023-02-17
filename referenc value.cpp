#include <iostream>
#include <cmath>
using namespace std;


void product( int& , int& );

void add( int*, int*);

void square( int& );
 
int sqrt( int& ); 

int main(){
	int x;
	int y;
	
	cout<<"		Enter 1st value		"<<endl;
	cin>>x;
	
	cout<<endl;
	
	cout<<"		Enter 2nd value		"<<endl;
	cin>>y;
	
	cout<<endl;
	
	product( x,y );
	
	add( &x , &y );
	
	square( x );
	cout<<"		The square of value is	"<<x<<endl;
	
	sqrt( x );
	cout<<"		 The square root of the value is	"<<x<<endl;
}

void product( int & a , int & b ){
	int z;
	
	z = a*b;
	
	cout<<"	 The product of the entered numbers are		"<<z<<endl;
	cout<<endl;
	cout<<"		THE LOCATION WHERE PRODUCT IS STORED IS		"<<&z<<endl;
	cout<<endl;
}
void add( int *a , int *b ){
	int z=*a+*b;
	
	cout<<"		The sum of Entered value is		"<<z<<endl;
} 
void square( int &a ){
	a*=a;
	cout<<"		The square root of entered value is	"<<a<<endl;
	cout<<endl;
}
int sqrt( int&a ){
	float result=sqrt( a );
	
	cout<<"	 The square root of the entered value is	"<<result<<endl;
		
}
