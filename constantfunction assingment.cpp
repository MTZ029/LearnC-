#include <iostream>

using namespace std;
class SHAPE{
public:
    const long L;
    const long H ;
    const string city;
    const string LIVE;
    const string *name;
    public://access specifier //

SHAPE( long A1 , long A2 ,string destination , string C ):L(A1), H(A2) ,city(destination), LIVE( C ){//initializer list//
    cout<<" THE CONSTRUCTOR IS CALLED   \n"<<endl;

};//  constructor //
void display()const{//   constant because we just want to read it no changes should be made    //
    cout<<"     IN THE CONSTANT DISPLAY FUNTION     \n"<<endl;
    cout<<" ENTERED DESTINATION IS   "<<city<< "    ENTERD LIVE LOCATION IS  "<<LIVE<<endl;
    cout<<" ENTERD DISTANCE IS    "<<L<<endl ;
    cout<<" ENTERED FAIR IN KM IS    RS"<<H<<endl ;
};//constant member function //

void measurements()const {

cout<<"     THE FAIR FROM YOUR CITY TO ENTERED DESTINATION IS       RS"<<L*H<<endl;
cout<<endl;

};// function for calculating area and volume//
SHAPE( int * NAME ):name( NAME ){}

};
int main()
{
    string dest ;
    cout<<" PLEASE ENTER THE NAME OF DESTINATION YOU WANT TO GO "<<endl;
    cin>>dest ;

      cout<<"     PLEASE ENTER YOUR PRESENT LOCATION  "<<endl;
    string live;
    cin>>live;
   cout<<"  PLEASE ENTER THE DISTANCE OF YOUR DESTINATION FROM THE PRESENT CITY YOU ARE IN KM  "<<endl;
   long length;
   cin>>length;

   cout<<"  PLEASE ENTER THE FAIR OF THE FLIGHT PER KM  "<<endl;
   long fair;
   cin>>fair;

   string * NAME

    const SHAPE shape( length , fair , dest , live );//constant object created //always //

    shape.display();
     shape.measurements();// the constant object can only call constant functions //

return 0;
}
