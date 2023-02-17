#include <iostream>

using namespace std;


/*class vehicle{
    public:
int c;


        vehicle(int x){
c=x;
        };

void printing(){
    cout<<"FUCK U rana BONDU"<<endl;

    }


};
*/


class parent{



public:
int z,y;
    parent(int y,int z){
this->z=y;
this->y=z;

    };


    void prin(){
    cout<<"FUCK U KASHIF BONDU"<<endl;

    }
    virtual void print()=0;
                  //cout<<"print child "<<endl;}

};


class child: public parent{
public:
     void print(){
                  cout<<"print child "<<endl;}
    child():parent(2,3){


    };
void childish(){
    cout<<"FUCK U alishah chuttu BONDU"<<endl;

    }
};

int main()
{
    child c;
  //  parent *ptr=&c;
    parent *ptr= new child;  //dynamic memory allocation
    ptr->print();











    /*child child1;
    child1.childish();
 child1.prin();
    child1.printing();


   cout<< child1.c;
  cout<<  child1.y;
  cout<<  child1.z;

  vehicle *ptr =& child1;
  ptr->printing();
  */

    return 0;
}
