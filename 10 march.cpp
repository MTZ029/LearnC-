#include <iostream>
using namespace std; 


//prototype for the vector sum .

float vetorsum(float*,float*,int);//for 1 dimensional 

int main(){
	
	float Vec1[4]={0,1,2,3};
	float Vec2[4]={4,5,6,7};
	int a;
	
    a=vetorsum( Vec1 , Vec2 , 4);
    
    return 0;
}



float vetorsum(float* v1 , float* v2, int z){//we know that v1 would work as pointer and tells the location of v1[0]
 
float sum;
int i;
for( i=0;i<z;i++){
	
	sum=sum+v1+v2;
	v1++;
	v2++;
		
}

cout<<sum;

return sum;
}
