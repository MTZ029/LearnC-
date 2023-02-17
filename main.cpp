#include <iostream>

using namespace std;

// making class//
class measurements{

public:
    int lenght ;
    int bredth ;
    int height ;
public:
    measurements(){};

    int calculatearea()const{
    return lenght*bredth;
    }
    int calculatevolume()const{
    return lenght*bredth*height;
    }
     ~measurements(){
     lenght=0;
     bredth=0;
    height=0;
     };
};

int konstant( const int a  , const int * const b){// function //
    const int p=89;
    cout<<"     The value of p is   "<<p<<endl;
      //p=77;//posisble when the p is constant//
    const int *ptrp;
    ptrp=&p;
    cout<<"     The address is      "<<ptrp<<"\n""\n"<<endl;

// b=&a;// not possible because the pointer is  read only ie constan//
// a=21;//not possible//


    const int z=56;
    cout<<"     The value of z is       "<<z<<endl;
    const int *ptrz;// note that the pointer is not constant
    ptrz=&z;//adress is stored//
    cout<<"     The address of z is     "<<ptrz<<"\n""\n"<<endl;

    const int k=34;
    cout<<"        The value of k is       "<<k<<endl;
    int const * const ptrk=&k;//note that the pointer is constant thus can't be changed//
    cout<<"     The address of k is         "<<ptrk<<"\n""\n"<<endl;
}


int main()
{
     int q;
     int * w;
    konstant( q , w );
    measurements M;//object is created //

    cout<<"     please enter the LENGTH     "<<endl;
    cin>>M.lenght;
    cout<<"     The entered LENGHT is       "<<M.lenght<<"\n"<<endl;

    cout<<"     Please enter the BREADTH    "<<endl;
    cin>>M.bredth;
    cout<<"     The entered BREDTH is       "<<M.bredth<<"\n"<<endl;

    cout<<"     Please enter the HEIGHT     "<<endl;
    cin>>M.height;
    cout<<"     The entered HEIGHT is       "<<M.bredth<<"\n"<<endl;

    cout<< "     The area is      " <<M.calculatearea()<<"\n"<<"\n"<<endl;

    cout<<"     The volume is    "<<M.calculatevolume()<<"\n"<<"\n"<<endl;

    cout << "Hello world!" << endl;
    return 0;
}
