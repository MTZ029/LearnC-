#include <iostream>
using namespace std;
int main (){
	int r;
	int s;
	int t;
	cout<<"ENTER FIRST NO"<<endl;
	
	cin>>r;
	cout<<"ENTER SECOND NO"<<endl;
	cin>>s;
	cout<<"ENTER THIRD NO"<<endl;
	cin>>t;
	
	if(r>s){
		if(r>t){
			cout<<r<<" is greater";
		}
		else{
		  cout<<t<<" is greater";
		}
    
	} else{
	
     if(s>t){
     	cout<<s<<" is greater";
     }else{
     	cout<<t<<" is greater";
     	
	 }	
     	
	 }  
	 

    return 0;
	}
	
	

