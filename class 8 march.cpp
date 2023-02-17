#include <iostream>
using namespace std; 

struct student{
	
	void evenorodd(int a){
		
		if(a%2==0){
			
			cout<<"The number is even"<<endl;
		}
		else{
			cout<<"The number is odd "<<endl;
		}
		
		
	}
};

int main(){
	int y;
	cout<<"Enter the marks "<<endl;
	cin>>y;
	
	student s1;
	 s1.evenorodd(y);
	 return 0;
	
}
//why do we use the member function outsude the class?
//if we the funtiosn in the class the function is not easily readbale as compaired to the function described outside the main function and class..
//no reason just makes the function reader friendly..

