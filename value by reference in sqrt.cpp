/*#include <iostream>
using namespace std;

//extentiating a function 

void root(int &);//prototype


int main(){
	int x; 
	
	x=9;
	
	cout<<"	We have to find the square root of "<<x<<endl;
	cout<<endl;
	cout<<"	The location of x in terms of referencing is "<<&x<<endl;
	
	//calling the function
	
	root( x );
	
	cout<<"	The square root of the value is	"<<x<<endl;
	
	return 0;
	
}

void root(int &p){
	
	cout<<endl;
	cout<<"	We are in root funtion	"<<&p<<endl;
	p*=p;// this is always equal to p*p=p
	
	cout<<"	Out of the function	"<<endl;
}*/

#include <iostream>
using namespace std;
class Calc{
	private:
		float a , b, result;
	public:
		Calc(){
			cout<<"Enter 0 for addition"<<endl;
			cout<<"Enter 1 for subtraction"<<endl;
			cout<<"Enter 2 for multiplication"<<endl;
			cout<<"Enter 3 for division"<<endl;
		}
		Calc(float x,float y, float taqsm){
			a=x;
			b=y;
			result=taqsm;
			taqsm=x/y;
			cout<<"Division ="<<taqsm<<endl;
		}
		Calc(int t, int v){
			int diff;
			result=diff;
			a=t;
			b=v;
			diff=t-v;
			cout<<"Difference="<<diff<<endl;
		}
		Calc(float X, float Y){
			float mult;
			a=X;
			b=Y;
			result=mult;
			mult=X*Y;
			cout<<"Multiplication="<<mult<<endl;
		}
		Calc(int v, int n, int sum){
			a=v;
			b=n;
			result=sum;
			sum=v+n;
			cout<<"Sum="<<sum<<endl; 
		}
		
};
int main(){
	float g,h,i;
	int a,b,c, f;
	char l;
	
	cout<<"Enter the operation you want to perform"<<endl;
	Calc();
	cin>>f;
	cout<<endl;
	if(f==0)
	{
	
	cout<<"Enter 2 numbers"<<endl;
	cin>>a;
	cin>>b;
	Calc(a,b,c);
}
	if(f==1)
	{
	cout<<"Enter 2 numbers"<<endl;
	cin>>a;
	cin>>b;
	Calc(a,b);
}
	if(f==2)
	{
	cout<<"Enter 2 numbers"<<endl;
	cin>>g;
	cin>>h;
	Calc(g,h);
}
	if(f==3)
	{
	
	cout<<"Enter 2 numbers"<<endl;
	cin>>g;
	cin>>h;
	Calc(g,h,i);
}
if(f>3)
{
	cout<<"Error......."<<endl;
}
cout<<"enter y if u want to continue or n if you don't want to continue'"<<endl;
		cin>>l;
	if(l=='Y',l=='y'){
		cout<<main();
		
	}
	else(l=='N',l=='n');{
		cout<<"	OUT OF CALCULATOR	"<<endl;
	}
 return 0;
}
