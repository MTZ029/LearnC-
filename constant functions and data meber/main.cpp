#include <iostream>

using namespace std;

class talha
{
public:
    const int x;
    int y ;
public:
    void food () const {
    cout<<"THe value is "<<x<<endl;

    cout<<y<<endl;

    }

};

int main(){
     talha obj;
     obj.food();

    cout << "Hello world!" << endl;
    return 0;
}
