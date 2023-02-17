#include <iostream>
using namespace std;
int main(){
   /*  float dollarIntoRupees;
     cin>>dollarIntoRupees;
     float Onedollar =150;
     float RUPEES= (float)dollarIntoRupees*Onedollar;
     
     cout<<"RUPPEES="<<RUPEES<<endl;
     
     */ int n;
     cout<<"***************Enter the subjects you want in the stock of the liberary***************"<<endl;
        int q[n]={};
        cin>>n;
      cout<<"***************Welcome to adding books to stock***************"<<endl;
        cout<<"Please enter the number of subjects you want to add in the liberary***************"<<endl;
        
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
     return 0;
}
	

