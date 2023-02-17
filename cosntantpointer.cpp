#include <iostream>
using namespace std;

class nam{
public:

   const string *  a;
nam(string  x):a(&x){
cout<<" COPY CONSTRUCTOR CALLED     "<<endl;
cout<<*a<<endl;
}

};

int main(){

string a1;
cout<<"     ENTER THE FIRST NAME    "<<endl;
cin>>a1;

nam n1( a1 );

return 0;
}
