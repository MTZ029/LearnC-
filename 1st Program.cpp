#include <iostream>
int main(){
     int x=4 ;
	 int f=1 ; 
	 int i=x ; 
	 f=f*x;
	 x=x-1;
	 for(i=x;i>1 ;i--)
	 f=f*i;
	 std::cout<<"f="<<f<<std::endl;
	 return 0;
}
     

