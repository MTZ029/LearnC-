#include <iostream>
using namespace std;


//prototype 

class matrix

int  matrmult( int*,int*,int*,int c,int r);

int main(){
	
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int i,j,k;
	
	matrmult(a,b,c,i,j);
	return 0;
}


int matrmult( int* M3,int* M2,int* M1,int i,int j){
	
	int k;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		
		cout<<"Enter the value of ["<<i<<"]["<<j<<"]"<<endl;
		cin>>M1[i][j];
	}
	}
	
	cout<<"The 1st matrix is "<<endl;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<M1[i][j]<<"	"<<end;
		}
	}
	
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<"Enter the value of ["<<i<<"]["<<j<<"]"<<endl;
			cin>>M2[i][j];
		}
	}
	
	cout<<"The second matrix is "<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<M2[i][j]<<"	"<<endl;
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				M3[i][j]=M3[i][j]+M1[i][k]*M2[k][j];//resultant 
			}
		}
	}
	
		cout<<"Product of 2 matrices is "<<endl;
	
	for(i=0;i<3;i++){
		
	for(j=0;j<3;j++){
		
		cout<<R[i][j]<<"	"<<endl;
	}
	}
}
