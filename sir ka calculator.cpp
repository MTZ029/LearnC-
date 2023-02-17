#include <iostream>
using namespace std;

class calculator{
	//constructors don't have an data type.
	//constructor's name is always same as class.
	//constructors might have input types.
	//you can make a calculator using constructor
	//constuctor is always public ( can never be private )
	private:
		int a;
		int b;


	public:


		calculator(int z){
			a=z;
			cout<<"Thois is value of z"<<endl;
		}

		calculator(int x, int y){
			a=x;
			b=y;
			cout<<a+b;
		}


	int add(int x , int y){
		a=x;//a and b are hidden variables can't be accessed directly.
		b=y;//encapsulated data;
		int c=a+b;

		cout<<"The sum is "<<c<<endl;
	};

	int swapfunction(int &x , int&y){
		a=x;
		b=y;
		int z=x;
		x=y;
		y=z;
	}
      int function(int x , int y){
		a=x;
		b=y;
	cout<<a<<b<<endl;
	}



};

int main(){
calculator c;
  c.function(10,20);
  c.swapfunction(10,20);


	return 0;

}




