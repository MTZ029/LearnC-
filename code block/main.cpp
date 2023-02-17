#include <iostream>

using namespace std;

int main()

{




    int array[5]={};
	cout<<"     Enter the numbers you want in the array  "<<endl;

     /* for(int i=1; i<=5; i++){

		cin>>array[i];

	}*/

	int i=1;

	do{
        cin>>array[i];
        i++;
	}
     while(i<=5);
    cout<<"     The entered 5 numbers in the array are     "<<endl;

	/*for(int j=1 ; j<=5 ; j++){


        cout<<"     The  "<<j<<"    term is "<<endl;
        cout<<array[j]<<endl;
	}*/

	int j=1;

	while(j<=5){

   cout<<"     The  "<<j<<"    term is "<<endl;
        cout<<array[j]<<endl;
        j++;
	}

    cout << "Hello world!" << endl;
    return 0;
}



