#include <iostream>
#include "time.h"
using namespace std ;

class mytime{
private:    // ACCESS SPECIFIER //
    int * second;
    int * minute;
    int * hour;
    const int year=0;

public:
    time_t now ;
public:     // ACCESS SPECIFIER //
    mytime(){
      now = time( 0 );

    char *date_time = ctime ( & now );
    cout<<" CUURENT TIME IS     "<<date_time<<endl;

    };// default constructor //
    mytime ( int * s, int * m , int * h , int y ):second(s) , minute(m), hour(h), year( 2021 ){
    int sec , minut , hor;
    s = & sec ;
    m = & minut ;
    h = & hor ;
    cout<<"     PLEASE ENTER SECONDS    "<<endl;
    cin>>* s;
    cout<<"     PLEASE ENTER MINUTES    "<<endl;
    cin>>* m;
    cout<<"     PLEASE ENTER HOURS IN 24 SYSTEM     "<<endl;
    cin>>* h;

    cout<<"     ENTERED mytime IS     "<<*h<<":"<<*m<<":"<<*s<<"     THE CONSTANT YEAR IS    "<<year<<endl;
    }
    mytime( int y ): year( 2021 ){
    cout<<" THE CONSTANT YEAR IS    "<<year<<"\n"<<endl;
    }
    ~mytime(){
    cout<<"     DESTRUCTOR CALLED   "<<endl;
    cout<<"     RELEASING MEMORY    "<<endl;
    delete second ;
    delete minute ;
    delete hour ;
    }
    void live();// prototype//
};
void mytime::live(){
      now = time( 0 );

    char *date_time = ctime ( & now );
    cout<<" CUURENT TIME IS     "<<date_time<<endl;

}

int main(){
int d,e ;
int *a ;
int *b ;
int *c ;

mytime C();

mytime c1( a , b , c , d );

mytime c2( e );

c2.live();
return 0 ;
}
