#include <iostream>
using namespace std;

//the function overloading means that the we use the functions more than once .... the name is same but the return type or the iunput type or the number of input arguments are different.

// EXAMPLE#

int add( int , int );//prototype

float add( float , float );//prototype

int main(){

	int x1;
	int x2;
	add( x1 , x2);
	
	float y1;
	float y2;
	
    add(y1 ,y2);
	return 0;
	
}


int add(int a, int b){
	int z;//note that the return type is same (int)

		
	cout<<"Enter first value"<<endl;
	cin>>a;

	cout<<"Enter second value"<<endl;
	cin>>b;
		z=a+b;
		cout<<"The sum is  "<<z<<endl;
	return z;
};

float add(float x, float y){
	float r;
	cout<<"Enter fisrt point value"<<endl;
	cin>>x;
	cout<<"Enter second point value"<<endl;
	cin>>y;
	
	r=x+y;
	
	cout<<"The sum is "<<endl;
	
	return r;
};
