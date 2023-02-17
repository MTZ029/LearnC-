#include <iostream>

using namespace std;

 int functiona(int* , int*);
int main()
{

    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;

    int b;
    cout<<"Enter the value of b"<<endl;
    cin>>b;

    functiona( &a , &b );
    cout << "Hello world!" << endl;
    return 0;
}

int functiona( int *a , int *b ){

        int z;
        z=*a+*b;
        if(z%2==0){
            cout<<"The sum is even"<<endl;
        }
        else{
            cout<<"The sun is odd"<<endl;
        }

        cout<<"The value of "<<z<<" is"<<z<<endl;
}
