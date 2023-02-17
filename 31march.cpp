#include <iostream>
using namespace std;


class maxchecker{
 private:
 	int a;
 	int b;
 
 public:
 	maxchecker(int x,int y){
 		a=x;
 		b=y;
 		
 		if(a>b){
 			cout<<"This is greater value"<<a<<endl;
 			
		 }
		 
		else{
			cout<<"This is greater value"<<b<<endl;
		}
 		
	 }
	 };
	int main(){	
	cout<<"Muhammad Talha Zahid"<<endl;
	cout<<endl;
	
	int a;
	int b;
	
	cout<<"Enter the first value"<<endl;
	cin>>a;
	
	cout<<endl;
	
	cout<<"Enter the second value"<<endl;
	cin>>b;
	
     maxchecker object(a,b);
	
		return 0;
			
	}
