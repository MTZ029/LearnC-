#include<iostream>
using namespace std;

void aishah (float *alisaL,float *alishahR,int s,int z);   // prototype size


int main(){

float pehla[] = {1,2,9,10,1,14};
float dusra[] = {9,8,2,13,4,5};

float *alisaL = pehla;
float *alishahR = dusra;

 cout<<"ARRAY ONE BEFORE  aishah"<<endl;

	for (int j = 0; j< 5; j++) {

        cout <<  pehla[j];
    }

    cout<<endl;
    cout<<endl;

    cout<<"ARRAY TWO BEFORE  aishah"<<endl;

    	for (int j = 0; j< 5; j++) {

        cout <<  dusra[j];
    }

aishah(alisaL,alishahR,5,5);





	return 1;
}





void aishah (float *alisaL,float *alishahR,int p,int c){


float *exchange=alisaL;

alisaL=alishahR;

alishahR=exchange;

	cout<<endl;

	 cout<<"ARRAY ONE AFTER  aishah"<<endl;

		for (int j = 0; j<p ; j++) {

        cout <<  alisaL[j]<<endl;
    }


   cout<<"ARRAY TWO AFTER  aishah"<<endl;
    	for (int b = 0; b<c ; b++) {

        cout <<  alishahR[b]<<endl;
    }

}
