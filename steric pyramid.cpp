#include <iostream>
#include <string>
using namespace std;

class libery{
 public://    attributes
     char bookname;
     char autharname;
     char username;
     char liberarian;
     char depname;
     int serialnumber;
     int registrationnumber;
 public://     member function
      libery();//default constructor

       libery(char bookname,char autharname ,char username ,char liberarian, char depname, int serialnumber , int registrationnumber){

            int x[7]={55,65,74,89,92,45,59};//as total subject are 7;
    int sum;
    int p=700;
    cout<<"     Please choose from the following    "<<endl;
    int userchoice;

    cout<<endl;
    cout<<"***************  Please hit 1 for donating a book into liberary  ***************"<<endl;
    cout<<"***************  Please hit 2 for issuing book from liberary     ***************"<<endl;
    cout<<"***************  Please hit 3 for checking the stock of liberary ***************"<<endl;
    cout<<"***************  Please hit 4 for going back to the main manue     ***************"<<endl;
    cout<<"***************  Please hit 5 for exit liberary page             ***************"<<endl;
    cout<<"***************       ##ONLY FOR THE MANAGEMENT##                ***************"<<endl;
    cout<<"***************  Please hit 6 for adding a book to stock         ***************"<<endl;
    cin>>userchoice;
    cout<<endl;
    switch(userchoice)
    {
    case(1):
        cout<<"***************Please enter your name***************"<<endl;
        cin>>username;
        cout<<"***************The USERNAMER entered is***************"<<userchoice<<endl;
        cout<<endl;
        cout<<"***************Please enter your department name***************"<<endl;
        cin>>depname;
        cout<<"***************The DEPARTMENT entered is***************"<<depname<<endl;
        cout<<endl;
        cout<<"***************Please enter the name of the book you want to donate to the liberary***************"<<endl;
        cin>>bookname;
        cout<<"***************The BOOKNAME entered is***************"<<bookname<<endl;
        cout<<endl;
        cout<<"***************please enter the author of the book you donated to the liberary***************"<<endl;
        cin>>autharname;
        cout<<"***************The AUTHARNAME entered is***************"<<autharname<<endl;
        cout<<endl;
        cout<<"***************Please enter the registration number of yours***************"<<endl;
        cin>>registrationnumber;
        cout<<"***************The REGISTRATION number entered is***************"<<registrationnumber<<endl;
        cout<<endl;
        cout<<"***************The book is succesfully added to the liberary please hand it over physically to the liberarian present***************"<<endl;
        cout<<endl;
        cout<<"***************HAVE A NICE DAY***************"<<endl;
        break;

    case(2):
        cout<<"***************Please enter your name***************"<<endl;
        cin>>username;
        cout<<"***************The USERNAME entered is***************"<<username<<endl;
        cout<<endl;
        cout<<"please enter the name of the liberarian at the time of issuing the book***************"<<endl;
        cin>>liberarian;
        cout<<"***************The LIBERARIAN entered is***************"<<liberarian<<endl;
        cout<<endl;
        cout<<"***************Please enter your registration number***************"<<endl;
        cin>>registrationnumber;
        cout<<"***************The REGISTRATION number entered is***************"<<registrationnumber<<endl;
        cout<<endl;
        cout<<"***************Please enter your department name***************"<<endl;
        cin>>depname;
        cout<<"***************The DEPARTMENT entered is***************"<<depname<<endl;
        cout<<endl;
        cout<<"***************You have successfully issued a book your name***************"<<endl;
        cout<<endl;
        cout<<"***************HAVE A NICE DAY***************"<<endl;
        break;
    case(3):
         cout<<"WELCOME TO THE STOCK RECORDER"<<endl;
         for(int i=0;i<7;i++){
            sum=sum+x[i];
         }
        cout<<"***************The total number of books available are***************"<<sum<<endl;
        cout<<"***************So there are "<<sum<<" books available out of "<<p<<" ***************"<<endl;
        cout<<endl;
        cout<<"***************Thanks for visiting stocks of the liberary***************"<<endl;
        cout<<endl;
        cout<<"***************HAVE A NICE DAY***************"<<endl;
        break;
        case(4):
        cout<<endl;
        cout<<"***************************************************************************"<<endl;
        libery();
        cout<<"***************HAVE A NICE DAY***************"<<endl;
        break;
    case(5):
        cout<<endl;
        exit( 0 );
        cout<<endl;
    case(6):
        int n;
        int q[n]={};
        cout<<"Please enter the number of subjects you want to add in the liberary***************"<<endl;
        cin>>n;
        cout<<endl;

        cout<<"***************Welcome to adding books to stock***************"<<endl;

        cout<<"***************The different entered subjects are***************"<<n<<endl;
        cout<<"***************Please enter the amount of copies you have of the subject you just entered***************"<<endl;
        for(int i=0 ; i<n ; i++){
            cin>>q[i];
        }
        cout<<"***************The enter number of books are***************"<<endl;
        for(int k=0 ; k<n ; k++){
            cout<<q[k]<<endl;
        }
        cout<<"***************Thankyou for donating in the liberary***************"<<endl;
        cout<<endl;
        cout<<"***************HAVE A NICE DAY***************"<<endl;
        break;

    }
    }//parameterized constructor

       libery(const libery &obj )
       {

    bookname=obj.bookname;

    autharname=obj.autharname;

    username=obj.username;

    liberarian=obj.liberarian;

    depname=obj.depname;

    serialnumber=obj.serialnumber;

    registrationnumber=obj.registrationnumber;

}//copy constructor

       ~libery();//destructor called;

       void display(){
           libery();
       }
};

int main()
{
    libery L1;// object is created for default constructor
    libery L2(char a, char b ,char c ,char d,char e, int f , int g);//object created for parameterized constructor
    libery L3=L1;//the state of L3 is assigned to L1 , another object created from the destructor we used as default constructor
    cout<<L2<<endl;
    return 0;
}



libery::~libery(){
cout<<"***************Destructor called***************"<<endl;
}
