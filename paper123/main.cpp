#include <iostream>
using namespace std;

class Shape{
public:
    int a;
    int b;
    int c;
public:
    Shape(int x):a(x){
    cout<<"in the first constructor"<<endl;
    }
    Shape( int y, int z ):b(y),c(z){
    cout<<"in the second constructor  "<<endl;
    }
};
class Rectangle:public Shape{

public:
    Rectangle(): Shape(9){
    cout<<"in the child class's first constructor "<<endl;
    }
    Rectangle( int x ):Shape(9,10){
    cout<<"in the child class's second constructor "<<endl;
    }

};


int main()
{
    Rectangle r; // object created //
    Rectangle obj( 2 );

    cout << "Hello world!" << endl;
    return 0;
}
