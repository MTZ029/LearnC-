#include <iostream>
using namespace std;

class calculator{

	 public:
    	
        int	a(int x1,int x2){
    	    int	answer=x1+x2;
    		return answer;
		}
	    int p(int x1,int x2){
	    	int answer=x1*x2;
	    	return answer;
		}
		int s(int x1,int x2){
		    int	answer=x1-x2;
			return answer;
		}
		int d(int x1,int x2){
			int answer=x1/x2;
			return answer;
		}
};

int main(){
	int x1;
	int x2;
	int answer;
	int userchoice;
	calculator C;
	
	
	
	cout<<"Choose the operation you want to do"<<endl;
	cout<<"Enter 1 for addition "<<endl;
	cout<<"Enter 2 for multiplication"<<endl;
	cout<<"Enter 3 for Subtraction"<<endl;
	cout<<"Enter 4 for division"<<endl;
	
	cin>>userchoice;
	
	switch(userchoice)
	{
		case(1):
			cout<<"Enter the first number "<<endl;
			cin>>x1;
			cout<<"Enter the second number "<<endl;
			cin>>x2;
		    cout<<"The sum of entered numbers is "<<C.a(x1,x2)<<endl;
		    break;
		    
		case(2):
			cout<<"Enter the first number "<<endl;
			cin>>x1;
			cout<<"Enter the second number "<<endl;
			cin>>x2;
			cout<<"The product of entered number is "<<C.p(x1,x2)<<endl;
			break;
			
		case(3):
			cout<<"Enter the first number "<<endl;
			cin>>x1;
			cout<<"Enter the second number "<<endl;
			cin>>x2;
			cout<<"The subtracted value of entered numbers is "<<C.s(x1,x2)<<endl;
			break;
			
		case(4):
			cout<<"Enter the first number "<<endl;
			cin>>x1;
			cout<<"Enter the second number "<<endl;
			cin>>x2;
			cout<<"The divided value of two numbers is "<<C.d(x1,x2)<<endl;
			break;
	}
	
	return 0;
	
	
}
