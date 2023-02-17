#include <iostream>
using namespace std;

class product{
private:
     int X ;
    const float pi=3.142;
public:
    product(int x1):pi( 3.142 ),X(x1){
    cout<<"CONSTRUCTOR CALLED   "<<endl;
    cout<<x1 * pi <<endl;
    }
};
int main(){
int x ;
cout<<"please enter the value you want to multiply wit pi   "<<endl;
cin>>x;

product p1( x );

return 0;
}
