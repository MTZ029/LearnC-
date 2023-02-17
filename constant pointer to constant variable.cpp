#include <iostream>
using namespace std;

class nam{
public:

const string * const x;

nam(const string X ):x( &X ){
cout<<" CONSTRUCTOR     "<<endl;
cout<<*x<<endl;
}
void disp(){
cout<< * x <<endl;
}

};

int main(){
string  t ;
cout<<"     THE stringEGER IS      "<<endl;
cin>>t ;

nam n1(  t );

return 0;
}
