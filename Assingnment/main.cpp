#include <iostream>

using namespace std;

class liberary//name of the class
{
private://acces specifier
    int  a;
    int  b;
    int  c;
    char d;
    char e;
    char f;

private:
     int stock(int *n){;//Function used for checking the stock
    a=*n;
        }
    liberary(char );
};

int stock(int *n1){
int x1=55;
int x2=72;
int x3=66;
int x4=22;
int x5=55;
int x6=57;
int x7=73;
int sum=x1+x2+x3+x4+x5+x6+x7;
cout<<"     Total number of books are    "<<x1<<endl;
cout<<"     The books Of subject CS-121 we have    "<<x1<<"     Of the auther DR.Muhammad Zia   "<<endl;
cout<<"     The books Of subject MA-102 we have    "<<x2<<"     Of the auther DR.Aqueel Ashraf   "<<endl;
cout<<"     The books Of subject IS-101 we have    "<<x3<<"     Of the auther Hur Multani   "<<endl;
cout<<"     The books Of subject PH-112 we have    "<<x4<<"     Of the auther Waleed Waseer   "<<endl;
cout<<"     The books Of subject EN-102 we have    "<<x5<<"     Of the auther Ali Naqi   "<<endl;
cout<<"     The books Of subject PH-194 we have    "<<x6<<"     Of the auther Waleed Waseer   "<<endl;
cout<<"     The books Of subject PY-101 we have    "<<x7<<"     Of the auther Maria Muzaffar   "<<endl;
cout<<endl;

};

int main()
{
    liberary L;//creation of object.
    int userchoice;
    cout<<"     Enter your choice   "<<endl;
    cout<<endl;
    cout<<"     Enter 1 for checking the stock   "<<endl;
    cout<<endl;
    cin>>userchoice;


    switch(userchoice)
{
case(1):
    L.stock;
}
    cout << "Hello world!" << endl;
    return 0;
}
