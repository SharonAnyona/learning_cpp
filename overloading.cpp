#include<iostream>
#include<math.h>
using namespace std;
class overloading{
	private: float a,b;
	         float e,f;
	public: void Get(){
		cout<<"Enter two whole numbers"<<endl;
		cin>>a>>b;
		cout<<"Enter two real numbers"<<endl;
		cin>>e>>f;
		calc(a,b);
		calc(a,e);
		calc(e,f);
		calc(e,a);
	}
	public:void calc(int x,int y){
		cout<<"Product of 2 whole nos"<<x*y<<endl;
	}
	public:void calc(float x,float y){
		cout<<"Product of 2 real nos"<<x*y<<endl;
	}
	public:void calc(float x,int y){
		cout<<"Product of real and int nos"<<x*y<<endl;
	}
	public:void calc(int x,float y){
		cout<<"Product of int and real nos"<<x*y<<endl;
	}
};
int main(){
	overloading ov;
	ov.Get();
	return 0;
	
}
		
