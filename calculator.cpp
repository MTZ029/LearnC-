#include <iostream>
using namespace std;

class calculator{

	 public:
	 	int x1;
	 	int x2;
	 	
	 	
	public:
    	
     int addtwo();
     int subtwo();
     int multwo();
     int divtwo();
};



	int addtwo(int x1 , int x2){
	cout<<"Enter the First value "<<endl;
     cin>>x1;
     cout<<"Enter the second value"<<endl;
     cin>>x2;
	cout<<"The sum is "<<x1+x2<<endl;
	
};

	int subtwo(int x1 , int x2){
	cout<<"Enter the First value "<<endl;
     cin>>x1;
     cout<<"Enter the second value"<<endl;
     cin>>x2;
	cout<<"the difference is "<<x1-x2<<endl;
	
};

   int multwo(int x1 , int x2){
	cout<<"Enter the First value "<<endl;
     cin>>x1;
     cout<<"Enter the second value"<<endl;
     cin>>x2;
	cout<<"The product is "<<x1*x2<<endl;
	
};

    int divtwo(int x1 , int x2){
	cout<<"Enter the First value "<<endl;
     cin>>x1;
     cout<<"Enter the second value"<<endl;
     cin>>x2;
	cout<<"The divided value is "<<x1/x2<<endl;
	
};
   
int main(){
	int a;
	int b;
	int answer;
	int userchoice;
	calculator C;
	
	
	
	cout<<"Choose the operation you want to do"<<endl;
	cout<<"Enter 1 for addition "<<endl;
	cout<<"Enter 2 for subtracttion"<<endl;
	cout<<"Enter 3 for multiplication"<<endl;
	cout<<"Enter 4 for division"<<endl;
	
	cin>>userchoice;
	
	switch(userchoice)
	{
		case(1):
			 addtwo(a, b);
		    break;
		case(2):
		     subtwo(a, b);
			break;
			
		case(3):
			 multwo(a, b);
			
			break;
			
		case(4):
		 
		    divtwo(a, b);
		
			break;
	}
	
	


	
	
}

 
    
	
	
