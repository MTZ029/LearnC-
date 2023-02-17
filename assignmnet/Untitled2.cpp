/*FIND SMALLEST OF 3 NO ? READ INPUT FROM KEYBAORD?
										ALGORITHM
	READ INPUT FROM KEYBOARD
	ASSIGN THEM VARIABLES (X1,X2,X3) RESPECTIVELY
	IF(X1<X2)
	IF(X1<X3)THEN
	SMALLER=X1;
	ELSE SMALLER=X3
	ELSE
	IF (X2<X3)THEN
	SMALLLER=X2
	ELSE SMALLER=X3
	PRINT SMALLER*/						          















#include <iostream>
using namespace std;
int main(){
	int x1;
	int x2;
	int x3;
	cout<<"enter 1st number="<<endl;
	cin>>x1;
	cout<<"enter 2nd number="<<endl;
	cin>>x2;
	cout<<"enter 3rd number="<<endl;
	cin>>x3;
	if (x1<x2){
		if(x1<x3){
			cout<<x1<<"is smaller ";
		}
		else
		     cout<<x3<<"is smaller ";
	}
	else{
		if(x2<x3){
			cout<<x2<<"is smaller ";
		}
		 else{
		 	cout<<x3<<"is smaller ";		 	
		 }
		      
		     
	}
	return 0;
}
